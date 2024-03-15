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
 * OAICustomerListRequest.h
 *
 * 
 */

#ifndef OAICustomerListRequest_H
#define OAICustomerListRequest_H

#include <QJsonObject>

#include "OAIObject.h"
#include "OAIUserListType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomerListRequest : public OAIObject {
public:
    OAICustomerListRequest();
    OAICustomerListRequest(QString json);
    ~OAICustomerListRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getRecords() const;
    void setRecords(const QString &records);
    bool is_records_Set() const;
    bool is_records_Valid() const;

    OAIUserListType getListType() const;
    void setListType(const OAIUserListType &list_type);
    bool is_list_type_Set() const;
    bool is_list_type_Valid() const;

    OAIObject getExceptions() const;
    void setExceptions(const OAIObject &exceptions);
    bool is_exceptions_Set() const;
    bool is_exceptions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString records;
    bool m_records_isSet;
    bool m_records_isValid;

    OAIUserListType list_type;
    bool m_list_type_isSet;
    bool m_list_type_isValid;

    OAIObject exceptions;
    bool m_exceptions_isSet;
    bool m_exceptions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomerListRequest)

#endif // OAICustomerListRequest_H
