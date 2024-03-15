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

/*
 * OAIAdResponse.h
 *
 * 
 */

#ifndef OAIAdResponse_H
#define OAIAdResponse_H

#include <QJsonObject>

#include "OAIAdCommon_quiz_pin_data.h"
#include "OAIAdCommon_tracking_urls.h"
#include "OAICreativeType.h"
#include "OAIEntityStatus.h"
#include "OAIGridClickType.h"
#include "OAIPinPromotionSummaryStatus.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAdCommon_tracking_urls;
class OAIAdCommon_quiz_pin_data;

class OAIAdResponse : public OAIObject {
public:
    OAIAdResponse();
    OAIAdResponse(QString json);
    ~OAIAdResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdGroupId() const;
    void setAdGroupId(const QString &ad_group_id);
    bool is_ad_group_id_Set() const;
    bool is_ad_group_id_Valid() const;

    QString getAndroidDeepLink() const;
    void setAndroidDeepLink(const QString &android_deep_link);
    bool is_android_deep_link_Set() const;
    bool is_android_deep_link_Valid() const;

    QList<QString> getCarouselAndroidDeepLinks() const;
    void setCarouselAndroidDeepLinks(const QList<QString> &carousel_android_deep_links);
    bool is_carousel_android_deep_links_Set() const;
    bool is_carousel_android_deep_links_Valid() const;

    QList<QString> getCarouselDestinationUrls() const;
    void setCarouselDestinationUrls(const QList<QString> &carousel_destination_urls);
    bool is_carousel_destination_urls_Set() const;
    bool is_carousel_destination_urls_Valid() const;

    QList<QString> getCarouselIosDeepLinks() const;
    void setCarouselIosDeepLinks(const QList<QString> &carousel_ios_deep_links);
    bool is_carousel_ios_deep_links_Set() const;
    bool is_carousel_ios_deep_links_Valid() const;

    QString getClickTrackingUrl() const;
    void setClickTrackingUrl(const QString &click_tracking_url);
    bool is_click_tracking_url_Set() const;
    bool is_click_tracking_url_Valid() const;

    OAICreativeType getCreativeType() const;
    void setCreativeType(const OAICreativeType &creative_type);
    bool is_creative_type_Set() const;
    bool is_creative_type_Valid() const;

    QString getDestinationUrl() const;
    void setDestinationUrl(const QString &destination_url);
    bool is_destination_url_Set() const;
    bool is_destination_url_Valid() const;

    QString getIosDeepLink() const;
    void setIosDeepLink(const QString &ios_deep_link);
    bool is_ios_deep_link_Set() const;
    bool is_ios_deep_link_Valid() const;

    bool isIsPinDeleted() const;
    void setIsPinDeleted(const bool &is_pin_deleted);
    bool is_is_pin_deleted_Set() const;
    bool is_is_pin_deleted_Valid() const;

    bool isIsRemovable() const;
    void setIsRemovable(const bool &is_removable);
    bool is_is_removable_Set() const;
    bool is_is_removable_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    OAIAdCommon_tracking_urls getTrackingUrls() const;
    void setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls);
    bool is_tracking_urls_Set() const;
    bool is_tracking_urls_Valid() const;

    QString getViewTrackingUrl() const;
    void setViewTrackingUrl(const QString &view_tracking_url);
    bool is_view_tracking_url_Set() const;
    bool is_view_tracking_url_Valid() const;

    QString getLeadFormId() const;
    void setLeadFormId(const QString &lead_form_id);
    bool is_lead_form_id_Set() const;
    bool is_lead_form_id_Valid() const;

    OAIGridClickType getGridClickType() const;
    void setGridClickType(const OAIGridClickType &grid_click_type);
    bool is_grid_click_type_Set() const;
    bool is_grid_click_type_Valid() const;

    QString getCustomizableCtaType() const;
    void setCustomizableCtaType(const QString &customizable_cta_type);
    bool is_customizable_cta_type_Set() const;
    bool is_customizable_cta_type_Valid() const;

    OAIAdCommon_quiz_pin_data getQuizPinData() const;
    void setQuizPinData(const OAIAdCommon_quiz_pin_data &quiz_pin_data);
    bool is_quiz_pin_data_Set() const;
    bool is_quiz_pin_data_Valid() const;

    QString getPinId() const;
    void setPinId(const QString &pin_id);
    bool is_pin_id_Set() const;
    bool is_pin_id_Valid() const;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QString getCampaignId() const;
    void setCampaignId(const QString &campaign_id);
    bool is_campaign_id_Set() const;
    bool is_campaign_id_Valid() const;

    QString getCollectionItemsDestinationUrlTemplate() const;
    void setCollectionItemsDestinationUrlTemplate(const QString &collection_items_destination_url_template);
    bool is_collection_items_destination_url_template_Set() const;
    bool is_collection_items_destination_url_template_Valid() const;

    qint32 getCreatedTime() const;
    void setCreatedTime(const qint32 &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QList<QString> getRejectedReasons() const;
    void setRejectedReasons(const QList<QString> &rejected_reasons);
    bool is_rejected_reasons_Set() const;
    bool is_rejected_reasons_Valid() const;

    QList<QString> getRejectionLabels() const;
    void setRejectionLabels(const QList<QString> &rejection_labels);
    bool is_rejection_labels_Set() const;
    bool is_rejection_labels_Valid() const;

    QString getReviewStatus() const;
    void setReviewStatus(const QString &review_status);
    bool is_review_status_Set() const;
    bool is_review_status_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getUpdatedTime() const;
    void setUpdatedTime(const qint32 &updated_time);
    bool is_updated_time_Set() const;
    bool is_updated_time_Valid() const;

    OAIPinPromotionSummaryStatus getSummaryStatus() const;
    void setSummaryStatus(const OAIPinPromotionSummaryStatus &summary_status);
    bool is_summary_status_Set() const;
    bool is_summary_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_ad_group_id;
    bool m_ad_group_id_isSet;
    bool m_ad_group_id_isValid;

    QString m_android_deep_link;
    bool m_android_deep_link_isSet;
    bool m_android_deep_link_isValid;

    QList<QString> m_carousel_android_deep_links;
    bool m_carousel_android_deep_links_isSet;
    bool m_carousel_android_deep_links_isValid;

    QList<QString> m_carousel_destination_urls;
    bool m_carousel_destination_urls_isSet;
    bool m_carousel_destination_urls_isValid;

    QList<QString> m_carousel_ios_deep_links;
    bool m_carousel_ios_deep_links_isSet;
    bool m_carousel_ios_deep_links_isValid;

    QString m_click_tracking_url;
    bool m_click_tracking_url_isSet;
    bool m_click_tracking_url_isValid;

    OAICreativeType m_creative_type;
    bool m_creative_type_isSet;
    bool m_creative_type_isValid;

    QString m_destination_url;
    bool m_destination_url_isSet;
    bool m_destination_url_isValid;

    QString m_ios_deep_link;
    bool m_ios_deep_link_isSet;
    bool m_ios_deep_link_isValid;

    bool m_is_pin_deleted;
    bool m_is_pin_deleted_isSet;
    bool m_is_pin_deleted_isValid;

    bool m_is_removable;
    bool m_is_removable_isSet;
    bool m_is_removable_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIEntityStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAIAdCommon_tracking_urls m_tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    QString m_view_tracking_url;
    bool m_view_tracking_url_isSet;
    bool m_view_tracking_url_isValid;

    QString m_lead_form_id;
    bool m_lead_form_id_isSet;
    bool m_lead_form_id_isValid;

    OAIGridClickType m_grid_click_type;
    bool m_grid_click_type_isSet;
    bool m_grid_click_type_isValid;

    QString m_customizable_cta_type;
    bool m_customizable_cta_type_isSet;
    bool m_customizable_cta_type_isValid;

    OAIAdCommon_quiz_pin_data m_quiz_pin_data;
    bool m_quiz_pin_data_isSet;
    bool m_quiz_pin_data_isValid;

    QString m_pin_id;
    bool m_pin_id_isSet;
    bool m_pin_id_isValid;

    QString m_ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString m_campaign_id;
    bool m_campaign_id_isSet;
    bool m_campaign_id_isValid;

    QString m_collection_items_destination_url_template;
    bool m_collection_items_destination_url_template_isSet;
    bool m_collection_items_destination_url_template_isValid;

    qint32 m_created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QList<QString> m_rejected_reasons;
    bool m_rejected_reasons_isSet;
    bool m_rejected_reasons_isValid;

    QList<QString> m_rejection_labels;
    bool m_rejection_labels_isSet;
    bool m_rejection_labels_isValid;

    QString m_review_status;
    bool m_review_status_isSet;
    bool m_review_status_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_updated_time;
    bool m_updated_time_isSet;
    bool m_updated_time_isValid;

    OAIPinPromotionSummaryStatus m_summary_status;
    bool m_summary_status_isSet;
    bool m_summary_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdResponse)

#endif // OAIAdResponse_H
