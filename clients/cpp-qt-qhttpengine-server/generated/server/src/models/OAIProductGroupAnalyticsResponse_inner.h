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
 * OAIProductGroupAnalyticsResponse_inner.h
 *
 * 
 */

#ifndef OAIProductGroupAnalyticsResponse_inner_H
#define OAIProductGroupAnalyticsResponse_inner_H

#include <QJsonObject>

#include "OAIAnyType.h"
#include <QDate>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupAnalyticsResponse_inner : public OAIObject {
public:
    OAIProductGroupAnalyticsResponse_inner();
    OAIProductGroupAnalyticsResponse_inner(QString json);
    ~OAIProductGroupAnalyticsResponse_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getProductGroupId() const;
    void setProductGroupId(const QString &product_group_id);
    bool is_product_group_id_Set() const;
    bool is_product_group_id_Valid() const;

    QDate getDate() const;
    void setDate(const QDate &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString product_group_id;
    bool m_product_group_id_isSet;
    bool m_product_group_id_isValid;

    QDate date;
    bool m_date_isSet;
    bool m_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupAnalyticsResponse_inner)

#endif // OAIProductGroupAnalyticsResponse_inner_H
