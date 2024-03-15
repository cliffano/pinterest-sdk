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
 * OAITrendingKeywordsResponse_trends_inner_time_series.h
 *
 * A sequence of weekly observations of the relative search volume for this keyword over the past year.&lt;br /&gt; These values are normalized to a [0-100] range, and can be used to visualize the history of user interest in this keyword. By default, normalization is applied independently to the time series of each keyword, but the &#x60;normalize_against_group&#x60; query parameter can be used in cases where you wish to compare relative volume between keywords.&lt;br /&gt; **Note**: The date of each observation is in ISO-8601 format and represents the *end* of the week.  For example, a value of &#x60;2023-10-31&#x60; would include searches that happened between &#x60;2023-10-25&#x60; and &#x60;2023-10-31&#x60;.
 */

#ifndef OAITrendingKeywordsResponse_trends_inner_time_series_H
#define OAITrendingKeywordsResponse_trends_inner_time_series_H

#include <QJsonObject>

#include <QDate>
#include <QMap>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITrendingKeywordsResponse_trends_inner_time_series : public OAIObject {
public:
    OAITrendingKeywordsResponse_trends_inner_time_series();
    OAITrendingKeywordsResponse_trends_inner_time_series(QString json);
    ~OAITrendingKeywordsResponse_trends_inner_time_series() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QDate getDate() const;
    void setDate(const QDate &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QDate m_date;
    bool m_date_isSet;
    bool m_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITrendingKeywordsResponse_trends_inner_time_series)

#endif // OAITrendingKeywordsResponse_trends_inner_time_series_H