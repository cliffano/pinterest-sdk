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
 * OAIMediaUpload_allOf_upload_parameters.h
 *
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 */

#ifndef OAIMediaUpload_allOf_upload_parameters_H
#define OAIMediaUpload_allOf_upload_parameters_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMediaUpload_allOf_upload_parameters : public OAIObject {
public:
    OAIMediaUpload_allOf_upload_parameters();
    OAIMediaUpload_allOf_upload_parameters(QString json);
    ~OAIMediaUpload_allOf_upload_parameters() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getXAmzDate() const;
    void setXAmzDate(const QString &x_amz_date);
    bool is_x_amz_date_Set() const;
    bool is_x_amz_date_Valid() const;

    QString getXAmzSignature() const;
    void setXAmzSignature(const QString &x_amz_signature);
    bool is_x_amz_signature_Set() const;
    bool is_x_amz_signature_Valid() const;

    QString getXAmzSecurityToken() const;
    void setXAmzSecurityToken(const QString &x_amz_security_token);
    bool is_x_amz_security_token_Set() const;
    bool is_x_amz_security_token_Valid() const;

    QString getXAmzAlgorithm() const;
    void setXAmzAlgorithm(const QString &x_amz_algorithm);
    bool is_x_amz_algorithm_Set() const;
    bool is_x_amz_algorithm_Valid() const;

    QString getKey() const;
    void setKey(const QString &key);
    bool is_key_Set() const;
    bool is_key_Valid() const;

    QString getPolicy() const;
    void setPolicy(const QString &policy);
    bool is_policy_Set() const;
    bool is_policy_Valid() const;

    QString getXAmzCredential() const;
    void setXAmzCredential(const QString &x_amz_credential);
    bool is_x_amz_credential_Set() const;
    bool is_x_amz_credential_Valid() const;

    QString getContentType() const;
    void setContentType(const QString &content_type);
    bool is_content_type_Set() const;
    bool is_content_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString x_amz_date;
    bool m_x_amz_date_isSet;
    bool m_x_amz_date_isValid;

    QString x_amz_signature;
    bool m_x_amz_signature_isSet;
    bool m_x_amz_signature_isValid;

    QString x_amz_security_token;
    bool m_x_amz_security_token_isSet;
    bool m_x_amz_security_token_isValid;

    QString x_amz_algorithm;
    bool m_x_amz_algorithm_isSet;
    bool m_x_amz_algorithm_isValid;

    QString key;
    bool m_key_isSet;
    bool m_key_isValid;

    QString policy;
    bool m_policy_isSet;
    bool m_policy_isValid;

    QString x_amz_credential;
    bool m_x_amz_credential_isSet;
    bool m_x_amz_credential_isValid;

    QString content_type;
    bool m_content_type_isSet;
    bool m_content_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMediaUpload_allOf_upload_parameters)

#endif // OAIMediaUpload_allOf_upload_parameters_H
