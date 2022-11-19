/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAdCommon_tracking_urls.h
 *
 * 
 */

#ifndef OAIAdCommon_tracking_urls_H
#define OAIAdCommon_tracking_urls_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdCommon_tracking_urls : public OAIObject {
public:
    OAIAdCommon_tracking_urls();
    OAIAdCommon_tracking_urls(QString json);
    ~OAIAdCommon_tracking_urls() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getImpression() const;
    void setImpression(const QList<QString> &impression);
    bool is_impression_Set() const;
    bool is_impression_Valid() const;

    QList<QString> getClick() const;
    void setClick(const QList<QString> &click);
    bool is_click_Set() const;
    bool is_click_Valid() const;

    QList<QString> getEngagement() const;
    void setEngagement(const QList<QString> &engagement);
    bool is_engagement_Set() const;
    bool is_engagement_Valid() const;

    QList<QString> getBuyableButton() const;
    void setBuyableButton(const QList<QString> &buyable_button);
    bool is_buyable_button_Set() const;
    bool is_buyable_button_Valid() const;

    QList<QString> getAudienceVerification() const;
    void setAudienceVerification(const QList<QString> &audience_verification);
    bool is_audience_verification_Set() const;
    bool is_audience_verification_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> impression;
    bool m_impression_isSet;
    bool m_impression_isValid;

    QList<QString> click;
    bool m_click_isSet;
    bool m_click_isValid;

    QList<QString> engagement;
    bool m_engagement_isSet;
    bool m_engagement_isValid;

    QList<QString> buyable_button;
    bool m_buyable_button_isSet;
    bool m_buyable_button_isValid;

    QList<QString> audience_verification;
    bool m_audience_verification_isSet;
    bool m_audience_verification_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdCommon_tracking_urls)

#endif // OAIAdCommon_tracking_urls_H
