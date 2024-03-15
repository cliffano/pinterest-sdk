/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIBillingApiHandler_H
#define OAI_OAIBillingApiHandler_H

#include <QObject>

#include "OAIAdsCreditRedeemRequest.h"
#include "OAIAdsCreditRedeemResponse.h"
#include "OAIAds_credits_discounts_get_200_response.h"
#include "OAIBilling_profiles_get_200_response.h"
#include "OAIError.h"
#include "OAISSIOAccountResponse.h"
#include "OAISSIOCreateInsertionOrderRequest.h"
#include "OAISSIOCreateInsertionOrderResponse.h"
#include "OAISSIOEditInsertionOrderRequest.h"
#include "OAISSIOEditInsertionOrderResponse.h"
#include "OAISSIOInsertionOrderStatusResponse.h"
#include "OAISsio_insertion_orders_status_get_by_ad_account_200_response.h"
#include "OAISsio_order_lines_get_by_ad_account_200_response.h"
#include <QString>

namespace OpenAPI {

class OAIBillingApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIBillingApiHandler();
    virtual ~OAIBillingApiHandler();


public Q_SLOTS:
    virtual void adsCredit_redeem(QString ad_account_id, OAIAdsCreditRedeemRequest oai_ads_credit_redeem_request);
    virtual void adsCreditsDiscounts_get(QString ad_account_id, QString bookmark, qint32 page_size);
    virtual void billingProfiles_get(QString ad_account_id, bool is_active, QString bookmark, qint32 page_size);
    virtual void ssioAccounts_get(QString ad_account_id);
    virtual void ssioInsertionOrder_create(QString ad_account_id, OAISSIOCreateInsertionOrderRequest oaissio_create_insertion_order_request);
    virtual void ssioInsertionOrder_edit(QString ad_account_id, OAISSIOEditInsertionOrderRequest oaissio_edit_insertion_order_request);
    virtual void ssioInsertionOrdersStatus_getByAdAccount(QString ad_account_id, QString bookmark, qint32 page_size);
    virtual void ssioInsertionOrdersStatus_getByPinOrderId(QString ad_account_id, QString pin_order_id);
    virtual void ssioOrderLines_getByAdAccount(QString ad_account_id, QString bookmark, qint32 page_size, QString pin_order_id);
    

};

}

#endif // OAI_OAIBillingApiHandler_H
