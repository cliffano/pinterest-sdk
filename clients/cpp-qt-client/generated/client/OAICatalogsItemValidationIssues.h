/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsItemValidationIssues.h
 *
 * 
 */

#ifndef OAICatalogsItemValidationIssues_H
#define OAICatalogsItemValidationIssues_H

#include <QJsonObject>

#include "OAICatalogsItemValidationErrors.h"
#include "OAICatalogsItemValidationWarnings.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsItemValidationErrors;
class OAICatalogsItemValidationWarnings;

class OAICatalogsItemValidationIssues : public OAIObject {
public:
    OAICatalogsItemValidationIssues();
    OAICatalogsItemValidationIssues(QString json);
    ~OAICatalogsItemValidationIssues() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getItemNumber() const;
    void setItemNumber(const qint32 &item_number);
    bool is_item_number_Set() const;
    bool is_item_number_Valid() const;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    OAICatalogsItemValidationErrors getErrors() const;
    void setErrors(const OAICatalogsItemValidationErrors &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    OAICatalogsItemValidationWarnings getWarnings() const;
    void setWarnings(const OAICatalogsItemValidationWarnings &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_item_number;
    bool m_item_number_isSet;
    bool m_item_number_isValid;

    QString m_item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    OAICatalogsItemValidationErrors m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    OAICatalogsItemValidationWarnings m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsItemValidationIssues)

#endif // OAICatalogsItemValidationIssues_H