/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIAdsApiHandler_H
#define OAI_OAIAdsApiHandler_H

#include <QObject>

#include "OAIAdArrayResponse.h"
#include "OAIAdCreateRequest.h"
#include "OAIAdPreviewRequest.h"
#include "OAIAdPreviewURLResponse.h"
#include "OAIAdResponse.h"
#include "OAIAdUpdateRequest.h"
#include "OAIAdsAnalyticsResponse_inner.h"
#include "OAIAdsAnalyticsTargetingType.h"
#include "OAIAds_list_200_response.h"
#include "OAIConversionReportAttributionType.h"
#include "OAIError.h"
#include "OAIGranularity.h"
#include "OAIMetricsResponse.h"
#include <QList>
#include <QString>

namespace OpenAPI {

class OAIAdsApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIAdsApiHandler();
    virtual ~OAIAdsApiHandler();


public Q_SLOTS:
    virtual void adPreviews_create(QString ad_account_id, OAIAdPreviewRequest oaiad_preview_request);
    virtual void adTargetingAnalytics_get(QString ad_account_id, QList<QString> ad_ids, QDate start_date, QDate end_date, QList<OAIAdsAnalyticsTargetingType> targeting_types, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time, OAIConversionReportAttributionType attribution_types);
    virtual void ads_analytics(QString ad_account_id, QDate start_date, QDate end_date, QList<QString> ad_ids, QList<QString> columns, OAIGranularity granularity, qint32 click_window_days, qint32 engagement_window_days, qint32 view_window_days, QString conversion_report_time);
    virtual void ads_create(QString ad_account_id, QList<OAIAdCreateRequest> oaiad_create_request);
    virtual void ads_get(QString ad_account_id, QString ad_id);
    virtual void ads_list(QString ad_account_id, QList<QString> campaign_ids, QList<QString> ad_group_ids, QList<QString> ad_ids, QList<QString> entity_statuses, qint32 page_size, QString order, QString bookmark);
    virtual void ads_update(QString ad_account_id, QList<OAIAdUpdateRequest> oaiad_update_request);
    

};

}

#endif // OAI_OAIAdsApiHandler_H