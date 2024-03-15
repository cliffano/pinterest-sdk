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
 * OAIItemDeleteDiscontinuedBatchRecord.h
 *
 * Object describing an item batch record to discontinue items
 */

#ifndef OAIItemDeleteDiscontinuedBatchRecord_H
#define OAIItemDeleteDiscontinuedBatchRecord_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemDeleteDiscontinuedBatchRecord : public OAIObject {
public:
    OAIItemDeleteDiscontinuedBatchRecord();
    OAIItemDeleteDiscontinuedBatchRecord(QString json);
    ~OAIItemDeleteDiscontinuedBatchRecord() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemDeleteDiscontinuedBatchRecord)

#endif // OAIItemDeleteDiscontinuedBatchRecord_H
