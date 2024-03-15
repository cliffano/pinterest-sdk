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
 * OAICatalogsUpdatableHotelAttributes.h
 *
 * 
 */

#ifndef OAICatalogsUpdatableHotelAttributes_H
#define OAICatalogsUpdatableHotelAttributes_H

#include <QJsonObject>

#include "OAICatalogsHotelAddress.h"
#include "OAICatalogsHotelGuestRatings.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsUpdatableHotelAttributes : public OAIObject {
public:
    OAICatalogsUpdatableHotelAttributes();
    OAICatalogsUpdatableHotelAttributes(QString json);
    ~OAICatalogsUpdatableHotelAttributes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getLink() const;
    void setLink(const QString &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getBrand() const;
    void setBrand(const QString &brand);
    bool is_brand_Set() const;
    bool is_brand_Valid() const;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    QList<QString> getNeighborhood() const;
    void setNeighborhood(const QList<QString> &neighborhood);
    bool is_neighborhood_Set() const;
    bool is_neighborhood_Valid() const;

    OAICatalogsHotelAddress getAddress() const;
    void setAddress(const OAICatalogsHotelAddress &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    QString getCustomLabel0() const;
    void setCustomLabel0(const QString &custom_label_0);
    bool is_custom_label_0_Set() const;
    bool is_custom_label_0_Valid() const;

    QString getCustomLabel1() const;
    void setCustomLabel1(const QString &custom_label_1);
    bool is_custom_label_1_Set() const;
    bool is_custom_label_1_Valid() const;

    QString getCustomLabel2() const;
    void setCustomLabel2(const QString &custom_label_2);
    bool is_custom_label_2_Set() const;
    bool is_custom_label_2_Valid() const;

    QString getCustomLabel3() const;
    void setCustomLabel3(const QString &custom_label_3);
    bool is_custom_label_3_Set() const;
    bool is_custom_label_3_Valid() const;

    QString getCustomLabel4() const;
    void setCustomLabel4(const QString &custom_label_4);
    bool is_custom_label_4_Set() const;
    bool is_custom_label_4_Valid() const;

    QString getCategory() const;
    void setCategory(const QString &category);
    bool is_category_Set() const;
    bool is_category_Valid() const;

    QString getBasePrice() const;
    void setBasePrice(const QString &base_price);
    bool is_base_price_Set() const;
    bool is_base_price_Valid() const;

    QString getSalePrice() const;
    void setSalePrice(const QString &sale_price);
    bool is_sale_price_Set() const;
    bool is_sale_price_Valid() const;

    OAICatalogsHotelGuestRatings getGuestRatings() const;
    void setGuestRatings(const OAICatalogsHotelGuestRatings &guest_ratings);
    bool is_guest_ratings_Set() const;
    bool is_guest_ratings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString link;
    bool m_link_isSet;
    bool m_link_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString brand;
    bool m_brand_isSet;
    bool m_brand_isValid;

    double latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    QList<QString> neighborhood;
    bool m_neighborhood_isSet;
    bool m_neighborhood_isValid;

    OAICatalogsHotelAddress address;
    bool m_address_isSet;
    bool m_address_isValid;

    QString custom_label_0;
    bool m_custom_label_0_isSet;
    bool m_custom_label_0_isValid;

    QString custom_label_1;
    bool m_custom_label_1_isSet;
    bool m_custom_label_1_isValid;

    QString custom_label_2;
    bool m_custom_label_2_isSet;
    bool m_custom_label_2_isValid;

    QString custom_label_3;
    bool m_custom_label_3_isSet;
    bool m_custom_label_3_isValid;

    QString custom_label_4;
    bool m_custom_label_4_isSet;
    bool m_custom_label_4_isValid;

    QString category;
    bool m_category_isSet;
    bool m_category_isValid;

    QString base_price;
    bool m_base_price_isSet;
    bool m_base_price_isValid;

    QString sale_price;
    bool m_sale_price_isSet;
    bool m_sale_price_isValid;

    OAICatalogsHotelGuestRatings guest_ratings;
    bool m_guest_ratings_isSet;
    bool m_guest_ratings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsUpdatableHotelAttributes)

#endif // OAICatalogsUpdatableHotelAttributes_H