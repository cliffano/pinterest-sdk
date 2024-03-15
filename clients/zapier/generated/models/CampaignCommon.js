const utils = require('../utils/utils');
const AdCommon_tracking_urls = require('../models/AdCommon_tracking_urls');
const CampaignSummaryStatus = require('../models/CampaignSummaryStatus');
const EntityStatus = require('../models/EntityStatus');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}ad_account_id`,
                label: `Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. - [${labelPrefix}ad_account_id]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}name`,
                label: `Campaign name. - [${labelPrefix}name]`,
                type: 'string',
            },
            {
                key: `${keyPrefix}status`,
                ...EntityStatus.fields(`${keyPrefix}status`, isInput),
            },
            {
                key: `${keyPrefix}lifetime_spend_cap`,
                label: `Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. - [${labelPrefix}lifetime_spend_cap]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}daily_spend_cap`,
                label: `Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. - [${labelPrefix}daily_spend_cap]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}order_line_id`,
                label: `Order line ID that appears on the invoice. - [${labelPrefix}order_line_id]`,
                type: 'string',
            },
            ...AdCommon_tracking_urls.fields(`${keyPrefix}tracking_urls`, isInput),
            {
                key: `${keyPrefix}start_time`,
                label: `Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. - [${labelPrefix}start_time]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}end_time`,
                label: `Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. - [${labelPrefix}end_time]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}summary_status`,
                ...CampaignSummaryStatus.fields(`${keyPrefix}summary_status`, isInput),
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ad_account_id': bundle.inputData?.[`${keyPrefix}ad_account_id`],
            'name': bundle.inputData?.[`${keyPrefix}name`],
            'status': bundle.inputData?.[`${keyPrefix}status`],
            'lifetime_spend_cap': bundle.inputData?.[`${keyPrefix}lifetime_spend_cap`],
            'daily_spend_cap': bundle.inputData?.[`${keyPrefix}daily_spend_cap`],
            'order_line_id': bundle.inputData?.[`${keyPrefix}order_line_id`],
            'tracking_urls': utils.removeIfEmpty(AdCommon_tracking_urls.mapping(bundle, `${keyPrefix}tracking_urls`)),
            'start_time': bundle.inputData?.[`${keyPrefix}start_time`],
            'end_time': bundle.inputData?.[`${keyPrefix}end_time`],
            'summary_status': bundle.inputData?.[`${keyPrefix}summary_status`],
        }
    },
}
