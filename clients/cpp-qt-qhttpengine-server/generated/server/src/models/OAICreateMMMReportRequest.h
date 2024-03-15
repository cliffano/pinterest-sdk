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
 * OAICreateMMMReportRequest.h
 *
 * 
 */

#ifndef OAICreateMMMReportRequest_H
#define OAICreateMMMReportRequest_H

#include <QJsonObject>

#include "OAIMMMReportingColumn.h"
#include "OAIMMMReportingTargetingType.h"
#include "OAITargetingAdvertiserCountry.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICreateMMMReportRequest : public OAIObject {
public:
    OAICreateMMMReportRequest();
    OAICreateMMMReportRequest(QString json);
    ~OAICreateMMMReportRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getReportName() const;
    void setReportName(const QString &report_name);
    bool is_report_name_Set() const;
    bool is_report_name_Valid() const;

    QString getStartDate() const;
    void setStartDate(const QString &start_date);
    bool is_start_date_Set() const;
    bool is_start_date_Valid() const;

    QString getEndDate() const;
    void setEndDate(const QString &end_date);
    bool is_end_date_Set() const;
    bool is_end_date_Valid() const;

    QString getGranularity() const;
    void setGranularity(const QString &granularity);
    bool is_granularity_Set() const;
    bool is_granularity_Valid() const;

    QString getLevel() const;
    void setLevel(const QString &level);
    bool is_level_Set() const;
    bool is_level_Valid() const;

    QList<OAIMMMReportingTargetingType> getTargetingTypes() const;
    void setTargetingTypes(const QList<OAIMMMReportingTargetingType> &targeting_types);
    bool is_targeting_types_Set() const;
    bool is_targeting_types_Valid() const;

    QList<OAIMMMReportingColumn> getColumns() const;
    void setColumns(const QList<OAIMMMReportingColumn> &columns);
    bool is_columns_Set() const;
    bool is_columns_Valid() const;

    QList<OAITargetingAdvertiserCountry> getCountries() const;
    void setCountries(const QList<OAITargetingAdvertiserCountry> &countries);
    bool is_countries_Set() const;
    bool is_countries_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString report_name;
    bool m_report_name_isSet;
    bool m_report_name_isValid;

    QString start_date;
    bool m_start_date_isSet;
    bool m_start_date_isValid;

    QString end_date;
    bool m_end_date_isSet;
    bool m_end_date_isValid;

    QString granularity;
    bool m_granularity_isSet;
    bool m_granularity_isValid;

    QString level;
    bool m_level_isSet;
    bool m_level_isValid;

    QList<OAIMMMReportingTargetingType> targeting_types;
    bool m_targeting_types_isSet;
    bool m_targeting_types_isValid;

    QList<OAIMMMReportingColumn> columns;
    bool m_columns_isSet;
    bool m_columns_isValid;

    QList<OAITargetingAdvertiserCountry> countries;
    bool m_countries_isSet;
    bool m_countries_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICreateMMMReportRequest)

#endif // OAICreateMMMReportRequest_H
