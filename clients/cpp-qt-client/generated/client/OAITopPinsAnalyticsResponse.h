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
 * OAITopPinsAnalyticsResponse.h
 *
 * 
 */

#ifndef OAITopPinsAnalyticsResponse_H
#define OAITopPinsAnalyticsResponse_H

#include <QJsonObject>

#include "OAITopPinsAnalyticsResponse_date_availability.h"
#include "OAITopPinsAnalyticsResponse_pins_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAITopPinsAnalyticsResponse_date_availability;
class OAITopPinsAnalyticsResponse_pins_inner;

class OAITopPinsAnalyticsResponse : public OAIObject {
public:
    OAITopPinsAnalyticsResponse();
    OAITopPinsAnalyticsResponse(QString json);
    ~OAITopPinsAnalyticsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAITopPinsAnalyticsResponse_date_availability getDateAvailability() const;
    void setDateAvailability(const OAITopPinsAnalyticsResponse_date_availability &date_availability);
    bool is_date_availability_Set() const;
    bool is_date_availability_Valid() const;

    QList<OAITopPinsAnalyticsResponse_pins_inner> getPins() const;
    void setPins(const QList<OAITopPinsAnalyticsResponse_pins_inner> &pins);
    bool is_pins_Set() const;
    bool is_pins_Valid() const;

    QString getSortBy() const;
    void setSortBy(const QString &sort_by);
    bool is_sort_by_Set() const;
    bool is_sort_by_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAITopPinsAnalyticsResponse_date_availability date_availability;
    bool m_date_availability_isSet;
    bool m_date_availability_isValid;

    QList<OAITopPinsAnalyticsResponse_pins_inner> pins;
    bool m_pins_isSet;
    bool m_pins_isValid;

    QString sort_by;
    bool m_sort_by_isSet;
    bool m_sort_by_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITopPinsAnalyticsResponse)

#endif // OAITopPinsAnalyticsResponse_H
