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
 * OAIItemAttributes.h
 *
 * 
 */

#ifndef OAIItemAttributes_H
#define OAIItemAttributes_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemAttributes : public OAIObject {
public:
    OAIItemAttributes();
    OAIItemAttributes(QString json);
    ~OAIItemAttributes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdLink() const;
    void setAdLink(const QString &ad_link);
    bool is_ad_link_Set() const;
    bool is_ad_link_Valid() const;

    bool isAdult() const;
    void setAdult(const bool &adult);
    bool is_adult_Set() const;
    bool is_adult_Valid() const;

    QString getAgeGroup() const;
    void setAgeGroup(const QString &age_group);
    bool is_age_group_Set() const;
    bool is_age_group_Valid() const;

    QString getAvailability() const;
    void setAvailability(const QString &availability);
    bool is_availability_Set() const;
    bool is_availability_Valid() const;

    double getAverageReviewRating() const;
    void setAverageReviewRating(const double &average_review_rating);
    bool is_average_review_rating_Set() const;
    bool is_average_review_rating_Valid() const;

    QString getBrand() const;
    void setBrand(const QString &brand);
    bool is_brand_Set() const;
    bool is_brand_Valid() const;

    Q_DECL_DEPRECATED bool isCheckoutEnabled() const;
    Q_DECL_DEPRECATED void setCheckoutEnabled(const bool &checkout_enabled);
    Q_DECL_DEPRECATED bool is_checkout_enabled_Set() const;
    Q_DECL_DEPRECATED bool is_checkout_enabled_Valid() const;

    QString getColor() const;
    void setColor(const QString &color);
    bool is_color_Set() const;
    bool is_color_Valid() const;

    QString getCondition() const;
    void setCondition(const QString &condition);
    bool is_condition_Set() const;
    bool is_condition_Valid() const;

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

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    bool isFreeShippingLabel() const;
    void setFreeShippingLabel(const bool &free_shipping_label);
    bool is_free_shipping_label_Set() const;
    bool is_free_shipping_label_Valid() const;

    QString getFreeShippingLimit() const;
    void setFreeShippingLimit(const QString &free_shipping_limit);
    bool is_free_shipping_limit_Set() const;
    bool is_free_shipping_limit_Valid() const;

    QString getGender() const;
    void setGender(const QString &gender);
    bool is_gender_Set() const;
    bool is_gender_Valid() const;

    QString getGoogleProductCategory() const;
    void setGoogleProductCategory(const QString &google_product_category);
    bool is_google_product_category_Set() const;
    bool is_google_product_category_Valid() const;

    qint32 getGtin() const;
    void setGtin(const qint32 &gtin);
    bool is_gtin_Set() const;
    bool is_gtin_Valid() const;

    Q_DECL_DEPRECATED QString getId() const;
    Q_DECL_DEPRECATED void setId(const QString &id);
    Q_DECL_DEPRECATED bool is_id_Set() const;
    Q_DECL_DEPRECATED bool is_id_Valid() const;

    QString getItemGroupId() const;
    void setItemGroupId(const QString &item_group_id);
    bool is_item_group_id_Set() const;
    bool is_item_group_id_Valid() const;

    qint64 getLastUpdatedTime() const;
    void setLastUpdatedTime(const qint64 &last_updated_time);
    bool is_last_updated_time_Set() const;
    bool is_last_updated_time_Valid() const;

    QString getLink() const;
    void setLink(const QString &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QString getMaterial() const;
    void setMaterial(const QString &material);
    bool is_material_Set() const;
    bool is_material_Valid() const;

    QString getMinAdPrice() const;
    void setMinAdPrice(const QString &min_ad_price);
    bool is_min_ad_price_Set() const;
    bool is_min_ad_price_Valid() const;

    QString getMobileLink() const;
    void setMobileLink(const QString &mobile_link);
    bool is_mobile_link_Set() const;
    bool is_mobile_link_Valid() const;

    QString getMpn() const;
    void setMpn(const QString &mpn);
    bool is_mpn_Set() const;
    bool is_mpn_Valid() const;

    qint32 getNumberOfRatings() const;
    void setNumberOfRatings(const qint32 &number_of_ratings);
    bool is_number_of_ratings_Set() const;
    bool is_number_of_ratings_Valid() const;

    qint32 getNumberOfReviews() const;
    void setNumberOfReviews(const qint32 &number_of_reviews);
    bool is_number_of_reviews_Set() const;
    bool is_number_of_reviews_Valid() const;

    QString getPattern() const;
    void setPattern(const QString &pattern);
    bool is_pattern_Set() const;
    bool is_pattern_Valid() const;

    QString getPrice() const;
    void setPrice(const QString &price);
    bool is_price_Set() const;
    bool is_price_Valid() const;

    QString getProductType() const;
    void setProductType(const QString &product_type);
    bool is_product_type_Set() const;
    bool is_product_type_Valid() const;

    QString getSalePrice() const;
    void setSalePrice(const QString &sale_price);
    bool is_sale_price_Set() const;
    bool is_sale_price_Valid() const;

    QString getShipping() const;
    void setShipping(const QString &shipping);
    bool is_shipping_Set() const;
    bool is_shipping_Valid() const;

    QString getShippingHeight() const;
    void setShippingHeight(const QString &shipping_height);
    bool is_shipping_height_Set() const;
    bool is_shipping_height_Valid() const;

    QString getShippingWeight() const;
    void setShippingWeight(const QString &shipping_weight);
    bool is_shipping_weight_Set() const;
    bool is_shipping_weight_Valid() const;

    QString getShippingWidth() const;
    void setShippingWidth(const QString &shipping_width);
    bool is_shipping_width_Set() const;
    bool is_shipping_width_Valid() const;

    QString getSize() const;
    void setSize(const QString &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getSizeSystem() const;
    void setSizeSystem(const QString &size_system);
    bool is_size_system_Set() const;
    bool is_size_system_Valid() const;

    QString getSizeType() const;
    void setSizeType(const QString &size_type);
    bool is_size_type_Set() const;
    bool is_size_type_Valid() const;

    QString getTax() const;
    void setTax(const QString &tax);
    bool is_tax_Set() const;
    bool is_tax_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QList<QString> getVariantNames() const;
    void setVariantNames(const QList<QString> &variant_names);
    bool is_variant_names_Set() const;
    bool is_variant_names_Valid() const;

    QList<QString> getVariantValues() const;
    void setVariantValues(const QList<QString> &variant_values);
    bool is_variant_values_Set() const;
    bool is_variant_values_Valid() const;

    QList<QString> getAdditionalImageLink() const;
    void setAdditionalImageLink(const QList<QString> &additional_image_link);
    bool is_additional_image_link_Set() const;
    bool is_additional_image_link_Valid() const;

    QList<QString> getImageLink() const;
    void setImageLink(const QList<QString> &image_link);
    bool is_image_link_Set() const;
    bool is_image_link_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_ad_link;
    bool m_ad_link_isSet;
    bool m_ad_link_isValid;

    bool m_adult;
    bool m_adult_isSet;
    bool m_adult_isValid;

    QString m_age_group;
    bool m_age_group_isSet;
    bool m_age_group_isValid;

    QString m_availability;
    bool m_availability_isSet;
    bool m_availability_isValid;

    double m_average_review_rating;
    bool m_average_review_rating_isSet;
    bool m_average_review_rating_isValid;

    QString m_brand;
    bool m_brand_isSet;
    bool m_brand_isValid;

    bool m_checkout_enabled;
    bool m_checkout_enabled_isSet;
    bool m_checkout_enabled_isValid;

    QString m_color;
    bool m_color_isSet;
    bool m_color_isValid;

    QString m_condition;
    bool m_condition_isSet;
    bool m_condition_isValid;

    QString m_custom_label_0;
    bool m_custom_label_0_isSet;
    bool m_custom_label_0_isValid;

    QString m_custom_label_1;
    bool m_custom_label_1_isSet;
    bool m_custom_label_1_isValid;

    QString m_custom_label_2;
    bool m_custom_label_2_isSet;
    bool m_custom_label_2_isValid;

    QString m_custom_label_3;
    bool m_custom_label_3_isSet;
    bool m_custom_label_3_isValid;

    QString m_custom_label_4;
    bool m_custom_label_4_isSet;
    bool m_custom_label_4_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    bool m_free_shipping_label;
    bool m_free_shipping_label_isSet;
    bool m_free_shipping_label_isValid;

    QString m_free_shipping_limit;
    bool m_free_shipping_limit_isSet;
    bool m_free_shipping_limit_isValid;

    QString m_gender;
    bool m_gender_isSet;
    bool m_gender_isValid;

    QString m_google_product_category;
    bool m_google_product_category_isSet;
    bool m_google_product_category_isValid;

    qint32 m_gtin;
    bool m_gtin_isSet;
    bool m_gtin_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_item_group_id;
    bool m_item_group_id_isSet;
    bool m_item_group_id_isValid;

    qint64 m_last_updated_time;
    bool m_last_updated_time_isSet;
    bool m_last_updated_time_isValid;

    QString m_link;
    bool m_link_isSet;
    bool m_link_isValid;

    QString m_material;
    bool m_material_isSet;
    bool m_material_isValid;

    QString m_min_ad_price;
    bool m_min_ad_price_isSet;
    bool m_min_ad_price_isValid;

    QString m_mobile_link;
    bool m_mobile_link_isSet;
    bool m_mobile_link_isValid;

    QString m_mpn;
    bool m_mpn_isSet;
    bool m_mpn_isValid;

    qint32 m_number_of_ratings;
    bool m_number_of_ratings_isSet;
    bool m_number_of_ratings_isValid;

    qint32 m_number_of_reviews;
    bool m_number_of_reviews_isSet;
    bool m_number_of_reviews_isValid;

    QString m_pattern;
    bool m_pattern_isSet;
    bool m_pattern_isValid;

    QString m_price;
    bool m_price_isSet;
    bool m_price_isValid;

    QString m_product_type;
    bool m_product_type_isSet;
    bool m_product_type_isValid;

    QString m_sale_price;
    bool m_sale_price_isSet;
    bool m_sale_price_isValid;

    QString m_shipping;
    bool m_shipping_isSet;
    bool m_shipping_isValid;

    QString m_shipping_height;
    bool m_shipping_height_isSet;
    bool m_shipping_height_isValid;

    QString m_shipping_weight;
    bool m_shipping_weight_isSet;
    bool m_shipping_weight_isValid;

    QString m_shipping_width;
    bool m_shipping_width_isSet;
    bool m_shipping_width_isValid;

    QString m_size;
    bool m_size_isSet;
    bool m_size_isValid;

    QString m_size_system;
    bool m_size_system_isSet;
    bool m_size_system_isValid;

    QString m_size_type;
    bool m_size_type_isSet;
    bool m_size_type_isValid;

    QString m_tax;
    bool m_tax_isSet;
    bool m_tax_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QList<QString> m_variant_names;
    bool m_variant_names_isSet;
    bool m_variant_names_isValid;

    QList<QString> m_variant_values;
    bool m_variant_values_isSet;
    bool m_variant_values_isValid;

    QList<QString> m_additional_image_link;
    bool m_additional_image_link_isSet;
    bool m_additional_image_link_isValid;

    QList<QString> m_image_link;
    bool m_image_link_isSet;
    bool m_image_link_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemAttributes)

#endif // OAIItemAttributes_H
