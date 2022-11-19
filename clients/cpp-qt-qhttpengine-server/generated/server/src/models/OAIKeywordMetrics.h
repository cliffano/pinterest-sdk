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
 * OAIKeywordMetrics.h
 *
 * Keyword metrics JSON
 */

#ifndef OAIKeywordMetrics_H
#define OAIKeywordMetrics_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIKeywordMetrics : public OAIObject {
public:
    OAIKeywordMetrics();
    OAIKeywordMetrics(QString json);
    ~OAIKeywordMetrics() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getAvgCpcInMicroCurrency() const;
    void setAvgCpcInMicroCurrency(const double &avg_cpc_in_micro_currency);
    bool is_avg_cpc_in_micro_currency_Set() const;
    bool is_avg_cpc_in_micro_currency_Valid() const;

    QString getKeywordQueryVolume() const;
    void setKeywordQueryVolume(const QString &keyword_query_volume);
    bool is_keyword_query_volume_Set() const;
    bool is_keyword_query_volume_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    double avg_cpc_in_micro_currency;
    bool m_avg_cpc_in_micro_currency_isSet;
    bool m_avg_cpc_in_micro_currency_isValid;

    QString keyword_query_volume;
    bool m_keyword_query_volume_isSet;
    bool m_keyword_query_volume_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIKeywordMetrics)

#endif // OAIKeywordMetrics_H
