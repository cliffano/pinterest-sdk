/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAITargetingSpec_1.h
 *
 * Ad group targeting specification defining the ad group target audience. For example, &#39;{\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]}&#39;
 */

#ifndef OAITargetingSpec_1_H
#define OAITargetingSpec_1_H

#include <QJsonObject>

#include "OAITargetingSpec_SHOPPING_RETARGETING.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITargetingSpec_1 : public OAIObject {
public:
    OAITargetingSpec_1();
    OAITargetingSpec_1(QString json);
    ~OAITargetingSpec_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getAgeBucket() const;
    void setAgeBucket(const QList<QString> &age_bucket);
    bool is_age_bucket_Set() const;
    bool is_age_bucket_Valid() const;

    QList<QString> getApptype() const;
    void setApptype(const QList<QString> &apptype);
    bool is_apptype_Set() const;
    bool is_apptype_Valid() const;

    QList<QString> getAudienceExclude() const;
    void setAudienceExclude(const QList<QString> &audience_exclude);
    bool is_audience_exclude_Set() const;
    bool is_audience_exclude_Valid() const;

    QList<QString> getAudienceInclude() const;
    void setAudienceInclude(const QList<QString> &audience_include);
    bool is_audience_include_Set() const;
    bool is_audience_include_Valid() const;

    QList<QString> getGender() const;
    void setGender(const QList<QString> &gender);
    bool is_gender_Set() const;
    bool is_gender_Valid() const;

    QList<QString> getGeo() const;
    void setGeo(const QList<QString> &geo);
    bool is_geo_Set() const;
    bool is_geo_Valid() const;

    QList<QString> getInterest() const;
    void setInterest(const QList<QString> &interest);
    bool is_interest_Set() const;
    bool is_interest_Valid() const;

    QList<QString> getLocale() const;
    void setLocale(const QList<QString> &locale);
    bool is_locale_Set() const;
    bool is_locale_Valid() const;

    QList<QString> getLocation() const;
    void setLocation(const QList<QString> &location);
    bool is_location_Set() const;
    bool is_location_Valid() const;

    QList<OAITargetingSpec_SHOPPING_RETARGETING> getShoppingRetargeting() const;
    void setShoppingRetargeting(const QList<OAITargetingSpec_SHOPPING_RETARGETING> &shopping_retargeting);
    bool is_shopping_retargeting_Set() const;
    bool is_shopping_retargeting_Valid() const;

    QList<QString> getTargetingStrategy() const;
    void setTargetingStrategy(const QList<QString> &targeting_strategy);
    bool is_targeting_strategy_Set() const;
    bool is_targeting_strategy_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> age_bucket;
    bool m_age_bucket_isSet;
    bool m_age_bucket_isValid;

    QList<QString> apptype;
    bool m_apptype_isSet;
    bool m_apptype_isValid;

    QList<QString> audience_exclude;
    bool m_audience_exclude_isSet;
    bool m_audience_exclude_isValid;

    QList<QString> audience_include;
    bool m_audience_include_isSet;
    bool m_audience_include_isValid;

    QList<QString> gender;
    bool m_gender_isSet;
    bool m_gender_isValid;

    QList<QString> geo;
    bool m_geo_isSet;
    bool m_geo_isValid;

    QList<QString> interest;
    bool m_interest_isSet;
    bool m_interest_isValid;

    QList<QString> locale;
    bool m_locale_isSet;
    bool m_locale_isValid;

    QList<QString> location;
    bool m_location_isSet;
    bool m_location_isValid;

    QList<OAITargetingSpec_SHOPPING_RETARGETING> shopping_retargeting;
    bool m_shopping_retargeting_isSet;
    bool m_shopping_retargeting_isValid;

    QList<QString> targeting_strategy;
    bool m_targeting_strategy_isSet;
    bool m_targeting_strategy_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITargetingSpec_1)

#endif // OAITargetingSpec_1_H