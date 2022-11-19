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
 * OAICatalogsFeedValidationDetails.h
 *
 * 
 */

#ifndef OAICatalogsFeedValidationDetails_H
#define OAICatalogsFeedValidationDetails_H

#include <QJsonObject>

#include "OAICatalogsFeedValidationErrors.h"
#include "OAICatalogsFeedValidationWarnings.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedValidationDetails : public OAIObject {
public:
    OAICatalogsFeedValidationDetails();
    OAICatalogsFeedValidationDetails(QString json);
    ~OAICatalogsFeedValidationDetails() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsFeedValidationErrors getErrors() const;
    void setErrors(const OAICatalogsFeedValidationErrors &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    OAICatalogsFeedValidationWarnings getWarnings() const;
    void setWarnings(const OAICatalogsFeedValidationWarnings &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsFeedValidationErrors errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    OAICatalogsFeedValidationWarnings warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedValidationDetails)

#endif // OAICatalogsFeedValidationDetails_H
