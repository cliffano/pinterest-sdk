/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsFeedProcessingSchedule.h
 *
 * Optional daily processing schedule. Use this to configure the preferred time for processing a feed (otherwise random).
 */

#ifndef OAICatalogsFeedProcessingSchedule_H
#define OAICatalogsFeedProcessingSchedule_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedProcessingSchedule : public OAIObject {
public:
    OAICatalogsFeedProcessingSchedule();
    OAICatalogsFeedProcessingSchedule(QString json);
    ~OAICatalogsFeedProcessingSchedule() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTime() const;
    void setTime(const QString &time);
    bool is_time_Set() const;
    bool is_time_Valid() const;

    QString getTimezone() const;
    void setTimezone(const QString &timezone);
    bool is_timezone_Set() const;
    bool is_timezone_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString time;
    bool m_time_isSet;
    bool m_time_isValid;

    QString timezone;
    bool m_timezone_isSet;
    bool m_timezone_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedProcessingSchedule)

#endif // OAICatalogsFeedProcessingSchedule_H