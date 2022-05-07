/* eslint-disable no-unused-vars */
const Service = require('./Service');

/**
* Get Pin analytics
* Get analytics for a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href=\"https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\">List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
*
* pinUnderscoreid String Unique identifier of a Pin.
* startUnderscoredate date Metric report start date (UTC). Format: YYYY-MM-DD
* endUnderscoredate date Metric report end date (UTC). Format: YYYY-MM-DD
* metricUnderscoretypes List Pin metric types to get data for, default is all.
* appUnderscoretypes String Apps or devices to get data for, default is all. (optional)
* splitUnderscorefield String How to split the data into groups. Not including this param means data won't be split. (optional)
* adUnderscoreaccountUnderscoreid String Unique identifier of an ad account. (optional)
* returns Map
* */
const pins/analytics = ({ pinUnderscoreid, startUnderscoredate, endUnderscoredate, metricUnderscoretypes, appUnderscoretypes, splitUnderscorefield, adUnderscoreaccountUnderscoreid }) => new Promise(
  async (resolve, reject) => {
    try {
      resolve(Service.successResponse({
        pinUnderscoreid,
        startUnderscoredate,
        endUnderscoredate,
        metricUnderscoretypes,
        appUnderscoretypes,
        splitUnderscorefield,
        adUnderscoreaccountUnderscoreid,
      }));
    } catch (e) {
      reject(Service.rejectResponse(
        e.message || 'Invalid input',
        e.status || 405,
      ));
    }
  },
);
/**
* Create Pin
* Create a Pin on a board or board section owned by the \"operation user_account\".  Note: If the current \"operation user_account\" (defined by the access token) has access to another user's Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account's permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id=12345&...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called 'curated content', please use our <a href='/docs/add-ons/save-button'>Save button</a> instead. For more tips on creating fresh content for Pinterest, review our <a href='/docs/solutions/content-apps'>Content App Solutions Guide</a>.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
*
* pin Pin Create a new Pin.
* returns Pin
* */
const pins/create = ({ pin }) => new Promise(
  async (resolve, reject) => {
    try {
      resolve(Service.successResponse({
        pin,
      }));
    } catch (e) {
      reject(Service.rejectResponse(
        e.message || 'Invalid input',
        e.status || 405,
      ));
    }
  },
);
/**
* Delete Pin
* Delete a Pins owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.
*
* pinUnderscoreid String Unique identifier of a Pin.
* no response value expected for this operation
* */
const pins/delete = ({ pinUnderscoreid }) => new Promise(
  async (resolve, reject) => {
    try {
      resolve(Service.successResponse({
        pinUnderscoreid,
      }));
    } catch (e) {
      reject(Service.rejectResponse(
        e.message || 'Invalid input',
        e.status || 405,
      ));
    }
  },
);
/**
* Get Pin
* Get a Pin owned by the \"operation user_account\" - or on a group board that has been shared with this account. - By default, the \"operation user_account\" is the token user_account.  Optional: Business Access: Specify an <code>ad_account_id</code> (obtained via <a href='/docs/api/v5/#operation/ad_accounts/list'>List ad accounts</a>) to use the owner of that ad_account as the \"operation user_account\". In order to do this, the token user_account must have one of the following <a href=\"https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\">Business Access</a> roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
*
* pinUnderscoreid String Unique identifier of a Pin.
* adUnderscoreaccountUnderscoreid String Unique identifier of an ad account. (optional)
* returns Pin
* */
const pins/get = ({ pinUnderscoreid, adUnderscoreaccountUnderscoreid }) => new Promise(
  async (resolve, reject) => {
    try {
      resolve(Service.successResponse({
        pinUnderscoreid,
        adUnderscoreaccountUnderscoreid,
      }));
    } catch (e) {
      reject(Service.rejectResponse(
        e.message || 'Invalid input',
        e.status || 405,
      ));
    }
  },
);

module.exports = {
  pins/analytics,
  pins/create,
  pins/delete,
  pins/get,
};
