/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsItemsBatch.h
 *
 * Object describing the catalogs items batch
 */

#ifndef OAICatalogsItemsBatch_H
#define OAICatalogsItemsBatch_H

#include <QJsonObject>

#include "OAIBatchOperationStatus.h"
#include "OAIItemProcessingRecord.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIItemProcessingRecord;

class OAICatalogsItemsBatch : public OAIObject {
public:
    OAICatalogsItemsBatch();
    OAICatalogsItemsBatch(QString json);
    ~OAICatalogsItemsBatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIItemProcessingRecord> getItems() const;
    void setItems(const QList<OAIItemProcessingRecord> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    QString getBatchId() const;
    void setBatchId(const QString &batch_id);
    bool is_batch_id_Set() const;
    bool is_batch_id_Valid() const;

    QDateTime getCreatedTime() const;
    void setCreatedTime(const QDateTime &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    QDateTime getCompletedTime() const;
    void setCompletedTime(const QDateTime &completed_time);
    bool is_completed_time_Set() const;
    bool is_completed_time_Valid() const;

    OAIBatchOperationStatus getStatus() const;
    void setStatus(const OAIBatchOperationStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIItemProcessingRecord> items;
    bool m_items_isSet;
    bool m_items_isValid;

    QString batch_id;
    bool m_batch_id_isSet;
    bool m_batch_id_isValid;

    QDateTime created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    QDateTime completed_time;
    bool m_completed_time_isSet;
    bool m_completed_time_isValid;

    OAIBatchOperationStatus status;
    bool m_status_isSet;
    bool m_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsItemsBatch)

#endif // OAICatalogsItemsBatch_H
