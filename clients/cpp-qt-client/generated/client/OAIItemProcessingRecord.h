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
 * OAIItemProcessingRecord.h
 *
 * Object describing an item processing record
 */

#ifndef OAIItemProcessingRecord_H
#define OAIItemProcessingRecord_H

#include <QJsonObject>

#include "OAIItemProcessingStatus.h"
#include "OAIItemValidationEvent.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIItemValidationEvent;

class OAIItemProcessingRecord : public OAIObject {
public:
    OAIItemProcessingRecord();
    OAIItemProcessingRecord(QString json);
    ~OAIItemProcessingRecord() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    QList<OAIItemValidationEvent> getErrors() const;
    void setErrors(const QList<OAIItemValidationEvent> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIItemValidationEvent> getWarnings() const;
    void setWarnings(const QList<OAIItemValidationEvent> &warnings);
    bool is_warnings_Set() const;
    bool is_warnings_Valid() const;

    OAIItemProcessingStatus getStatus() const;
    void setStatus(const OAIItemProcessingStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    QList<OAIItemValidationEvent> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIItemValidationEvent> m_warnings;
    bool m_warnings_isSet;
    bool m_warnings_isValid;

    OAIItemProcessingStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemProcessingRecord)

#endif // OAIItemProcessingRecord_H
