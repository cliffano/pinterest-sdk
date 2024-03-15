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
 * OAIAdsCreditRedeemRequest.h
 *
 * 
 */

#ifndef OAIAdsCreditRedeemRequest_H
#define OAIAdsCreditRedeemRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdsCreditRedeemRequest : public OAIObject {
public:
    OAIAdsCreditRedeemRequest();
    OAIAdsCreditRedeemRequest(QString json);
    ~OAIAdsCreditRedeemRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOfferCodeHash() const;
    void setOfferCodeHash(const QString &offer_code_hash);
    bool is_offer_code_hash_Set() const;
    bool is_offer_code_hash_Valid() const;

    bool isValidateOnly() const;
    void setValidateOnly(const bool &validate_only);
    bool is_validate_only_Set() const;
    bool is_validate_only_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString offer_code_hash;
    bool m_offer_code_hash_isSet;
    bool m_offer_code_hash_isValid;

    bool validate_only;
    bool m_validate_only_isSet;
    bool m_validate_only_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdsCreditRedeemRequest)

#endif // OAIAdsCreditRedeemRequest_H
