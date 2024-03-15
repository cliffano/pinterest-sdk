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
 * OAIAdsCreditDiscountsResponse.h
 *
 * 
 */

#ifndef OAIAdsCreditDiscountsResponse_H
#define OAIAdsCreditDiscountsResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsCreditDiscountsResponse : public OAIObject {
public:
    OAIAdsCreditDiscountsResponse();
    OAIAdsCreditDiscountsResponse(QString json);
    ~OAIAdsCreditDiscountsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isActive() const;
    void setActive(const bool &active);
    bool is_active_Set() const;
    bool is_active_Valid() const;

    QString getAdvertiserId() const;
    void setAdvertiserId(const QString &advertiser_id);
    bool is_advertiser_id_Set() const;
    bool is_advertiser_id_Valid() const;

    QString getDiscountType() const;
    void setDiscountType(const QString &discount_type);
    bool is_discount_type_Set() const;
    bool is_discount_type_Valid() const;

    double getDiscountInMicroCurrency() const;
    void setDiscountInMicroCurrency(const double &discount_in_micro_currency);
    bool is_discount_in_micro_currency_Set() const;
    bool is_discount_in_micro_currency_Valid() const;

    QString getDiscountCurrency() const;
    void setDiscountCurrency(const QString &discount_currency);
    bool is_discount_currency_Set() const;
    bool is_discount_currency_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    double getRemainingDiscountInMicroCurrency() const;
    void setRemainingDiscountInMicroCurrency(const double &remaining_discount_in_micro_currency);
    bool is_remaining_discount_in_micro_currency_Set() const;
    bool is_remaining_discount_in_micro_currency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool active;
    bool m_active_isSet;
    bool m_active_isValid;

    QString advertiser_id;
    bool m_advertiser_id_isSet;
    bool m_advertiser_id_isValid;

    QString discount_type;
    bool m_discount_type_isSet;
    bool m_discount_type_isValid;

    double discount_in_micro_currency;
    bool m_discount_in_micro_currency_isSet;
    bool m_discount_in_micro_currency_isValid;

    QString discount_currency;
    bool m_discount_currency_isSet;
    bool m_discount_currency_isValid;

    QString title;
    bool m_title_isSet;
    bool m_title_isValid;

    double remaining_discount_in_micro_currency;
    bool m_remaining_discount_in_micro_currency_isSet;
    bool m_remaining_discount_in_micro_currency_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsCreditDiscountsResponse)

#endif // OAIAdsCreditDiscountsResponse_H