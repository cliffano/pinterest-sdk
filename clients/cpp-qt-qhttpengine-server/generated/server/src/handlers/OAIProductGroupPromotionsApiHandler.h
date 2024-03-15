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

#ifndef OAI_OAIProductGroupPromotionsApiHandler_H
#define OAI_OAIProductGroupPromotionsApiHandler_H

#include <QObject>

#include "OAIError.h"
#include "OAIGranularity.h"
#include "OAIProductGroupAnalyticsResponse_inner.h"
#include "OAIProductGroupPromotionCreateRequest.h"
#include "OAIProductGroupPromotionResponse.h"
#include "OAIProductGroupPromotionUpdateRequest.h"
#include "OAIProduct_group_promotions_list_200_response.h"
#include <QList>
#include <QString>

namespace OpenAPI {

class OAIProductGroupPromotionsApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIProductGroupPromotionsApiHandler();
    virtual ~OAIProductGroupPromotionsApiHandler();


public Q_SLOTS:
    virtual void productGroupPromotions_create(QString ad_account_id, OAIProductGroupPromotionCreateRequest oai_product_group_promotion_create_request);
    virtual void productGroupPromotions_get(QString ad_account_id, QString product_group_promotion_id);
    virtual void productGroupPromotions_list(QString ad_account_id, QList<QString> product_group_promotion_ids, QList<QString> entity_statuses, QString ad_group_id, qint32 page_size, QString order, QString bookmark);
    virtual void productGroupPromotions_update(QString ad_account_id, OAIProductGroupPromotionUpdateRequest oai_product_group_promotion_update_request);
    virtual void productGroups_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> product_group_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    

};

}

#endif // OAI_OAIProductGroupPromotionsApiHandler_H
