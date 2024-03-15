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
 * OAICustomerList.h
 *
 * 
 */

#ifndef OAICustomerList_H
#define OAICustomerList_H

#include <QJsonObject>

#include "OAIObject.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustomerList : public OAIObject {
public:
    OAICustomerList();
    OAICustomerList(QString json);
    ~OAICustomerList() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    double getCreatedTime() const;
    void setCreatedTime(const double &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    double getNumBatches() const;
    void setNumBatches(const double &num_batches);
    bool is_num_batches_Set() const;
    bool is_num_batches_Valid() const;

    double getNumRemovedUserRecords() const;
    void setNumRemovedUserRecords(const double &num_removed_user_records);
    bool is_num_removed_user_records_Set() const;
    bool is_num_removed_user_records_Valid() const;

    double getNumUploadedUserRecords() const;
    void setNumUploadedUserRecords(const double &num_uploaded_user_records);
    bool is_num_uploaded_user_records_Set() const;
    bool is_num_uploaded_user_records_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    double getUpdatedTime() const;
    void setUpdatedTime(const double &updated_time);
    bool is_updated_time_Set() const;
    bool is_updated_time_Valid() const;

    OAIObject getExceptions() const;
    void setExceptions(const OAIObject &exceptions);
    bool is_exceptions_Set() const;
    bool is_exceptions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    double m_created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    double m_num_batches;
    bool m_num_batches_isSet;
    bool m_num_batches_isValid;

    double m_num_removed_user_records;
    bool m_num_removed_user_records_isSet;
    bool m_num_removed_user_records_isValid;

    double m_num_uploaded_user_records;
    bool m_num_uploaded_user_records_isSet;
    bool m_num_uploaded_user_records_isValid;

    QString m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    double m_updated_time;
    bool m_updated_time_isSet;
    bool m_updated_time_isValid;

    OAIObject m_exceptions;
    bool m_exceptions_isSet;
    bool m_exceptions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustomerList)

#endif // OAICustomerList_H
