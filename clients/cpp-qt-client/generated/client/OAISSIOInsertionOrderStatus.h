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
 * OAISSIOInsertionOrderStatus.h
 *
 * 
 */

#ifndef OAISSIOInsertionOrderStatus_H
#define OAISSIOInsertionOrderStatus_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISSIOInsertionOrderStatus : public OAIObject {
public:
    OAISSIOInsertionOrderStatus();
    OAISSIOInsertionOrderStatus(QString json);
    ~OAISSIOInsertionOrderStatus() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPinOrderId() const;
    void setPinOrderId(const QString &pin_order_id);
    bool is_pin_order_id_Set() const;
    bool is_pin_order_id_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getCreationTime() const;
    void setCreationTime(const QString &creation_time);
    bool is_creation_time_Set() const;
    bool is_creation_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_pin_order_id;
    bool m_pin_order_id_isSet;
    bool m_pin_order_id_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_creation_time;
    bool m_creation_time_isSet;
    bool m_creation_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISSIOInsertionOrderStatus)

#endif // OAISSIOInsertionOrderStatus_H
