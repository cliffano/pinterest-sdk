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
 * OAIOrderLineResponse.h
 *
 * 
 */

#ifndef OAIOrderLineResponse_H
#define OAIOrderLineResponse_H

#include <QJsonObject>

#include "OAIOrderLine.h"
#include "OAIOrderLineError.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderLineResponse : public OAIObject {
public:
    OAIOrderLineResponse();
    OAIOrderLineResponse(QString json);
    ~OAIOrderLineResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIOrderLineError> getErrors() const;
    void setErrors(const QList<OAIOrderLineError> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIOrderLine> getOrderLine() const;
    void setOrderLine(const QList<OAIOrderLine> &order_line);
    bool is_order_line_Set() const;
    bool is_order_line_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIOrderLineError> errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIOrderLine> order_line;
    bool m_order_line_isSet;
    bool m_order_line_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderLineResponse)

#endif // OAIOrderLineResponse_H
