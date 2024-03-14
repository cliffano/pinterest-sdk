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

/*
 * OAIAdCreateRequest.h
 *
 * 
 */

#ifndef OAIAdCreateRequest_H
#define OAIAdCreateRequest_H

#include <QJsonObject>

#include "OAIAdCommon_tracking_urls.h"
#include "OAICreativeType.h"
#include "OAIEntityStatus.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAdCommon_tracking_urls;

class OAIAdCreateRequest : public OAIObject {
public:
    OAIAdCreateRequest();
    OAIAdCreateRequest(QString json);
    ~OAIAdCreateRequest() override;

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

    QString getPinId() const;
    void setPinId(const QString &pin_id);
    bool is_pin_id_Set() const;
    bool is_pin_id_Valid() const;

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

    QString m_pin_id;
    bool m_pin_id_isSet;
    bool m_pin_id_isValid;

    OAIEntityStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAIAdCommon_tracking_urls m_tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    QString m_view_tracking_url;
    bool m_view_tracking_url_isSet;
    bool m_view_tracking_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdCreateRequest)

#endif // OAIAdCreateRequest_H
