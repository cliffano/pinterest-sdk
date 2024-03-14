const utils = require('../utils/utils');

module.exports = {
        fields: (key) => (
            {
                label: `Metrics availablity, e.g., \"READY\". - [${key.replaceAll('__', '.')}]`,
                choices: [
                    'PROCESSING',
                    'READY',
                    'ESTIMATE',
                    'BEFORE_BUSINESS_CREATED',
                    'BEFORE_DATA_RETENTION_PERIOD',
                    'BEFORE_PIN_DATA_RETENTION_PERIOD',
                    'BEFORE_METRIC_START_DATE',
                    'BEFORE_CORE_METRIC_START_DATE',
                    'BEFORE_PIN_FORMAT_METRIC_START_DATE',
                    'BEFORE_AUDIENCE_METRIC_START_DATE',
                    'BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE',
                    'BEFORE_VIDEO_METRIC_START_DATE',
                    'BEFORE_CONVERSION_METRIC_START_DATE',
                    'PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD',
                    'IN_BAD_TAG_DATE',
                    'BEFORE_PUBLISHED_METRIC_START_DATE',
                    'BEFORE_ASSIST_METRIC_START_DATE',
                    'BEFORE_PIN_CREATED',
                    'BEFORE_ACCOUNT_CLAIMED',
                    'BEFORE_DEMOGRAPHIC_FILTERS_START_DATE',
                    'AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD',
                    'AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD',
                    'BEFORE_PRODUCT_GROUP_FILTER_START_DATE',
                ],
            }
        )
    }
