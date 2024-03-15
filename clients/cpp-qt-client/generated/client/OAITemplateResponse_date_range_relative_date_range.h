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
 * OAITemplateResponse_date_range_relative_date_range.h
 *
 * The relative date range of the template
 */

#ifndef OAITemplateResponse_date_range_relative_date_range_H
#define OAITemplateResponse_date_range_relative_date_range_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITemplateResponse_date_range_relative_date_range : public OAIObject {
public:
    OAITemplateResponse_date_range_relative_date_range();
    OAITemplateResponse_date_range_relative_date_range(QString json);
    ~OAITemplateResponse_date_range_relative_date_range() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    double getStartDaysInPast() const;
    void setStartDaysInPast(const double &start_days_in_past);
    bool is_start_days_in_past_Set() const;
    bool is_start_days_in_past_Valid() const;

    double getEndDaysInPast() const;
    void setEndDaysInPast(const double &end_days_in_past);
    bool is_end_days_in_past_Set() const;
    bool is_end_days_in_past_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    double m_start_days_in_past;
    bool m_start_days_in_past_isSet;
    bool m_start_days_in_past_isValid;

    double m_end_days_in_past;
    bool m_end_days_in_past_isSet;
    bool m_end_days_in_past_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITemplateResponse_date_range_relative_date_range)

#endif // OAITemplateResponse_date_range_relative_date_range_H