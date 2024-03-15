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
 * OAICatalogsProductMetadata.h
 *
 * Product metadata entity
 */

#ifndef OAICatalogsProductMetadata_H
#define OAICatalogsProductMetadata_H

#include <QJsonObject>

#include "OAINonNullableCatalogsCurrency.h"
#include "OAINonNullableProductAvailabilityType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductMetadata : public OAIObject {
public:
    OAICatalogsProductMetadata();
    OAICatalogsProductMetadata(QString json);
    ~OAICatalogsProductMetadata() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    QString getItemGroupId() const;
    void setItemGroupId(const QString &item_group_id);
    bool is_item_group_id_Set() const;
    bool is_item_group_id_Valid() const;

    OAINonNullableProductAvailabilityType getAvailability() const;
    void setAvailability(const OAINonNullableProductAvailabilityType &availability);
    bool is_availability_Set() const;
    bool is_availability_Valid() const;

    double getPrice() const;
    void setPrice(const double &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    double getSalePrice() const;
    void setSalePrice(const double &sale_price);
    bool is_sale_price_Set() const;
    bool is_sale_price_Valid() const;

    OAINonNullableCatalogsCurrency getCurrency() const;
    void setCurrency(const OAINonNullableCatalogsCurrency &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    QString item_group_id;
    bool m_item_group_id_isSet;
    bool m_item_group_id_isValid;

    OAINonNullableProductAvailabilityType availability;
    bool m_availability_isSet;
    bool m_availability_isValid;

    double price;
    bool m_price_isSet;
    bool m_price_isValid;

    double sale_price;
    bool m_sale_price_isSet;
    bool m_sale_price_isValid;

    OAINonNullableCatalogsCurrency currency;
    bool m_currency_isSet;
    bool m_currency_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductMetadata)

#endif // OAICatalogsProductMetadata_H
