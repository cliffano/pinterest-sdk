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
 * OAISSIOAccountItem.h
 *
 * 
 */

#ifndef OAISSIOAccountItem_H
#define OAISSIOAccountItem_H

#include <QJsonObject>

#include "OAISSIOAccountAddress.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISSIOAccountAddress;

class OAISSIOAccountItem : public OAIObject {
public:
    OAISSIOAccountItem();
    OAISSIOAccountItem(QString json);
    ~OAISSIOAccountItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getIoTermsId() const;
    void setIoTermsId(const QString &io_terms_id);
    bool is_io_terms_id_Set() const;
    bool is_io_terms_id_Valid() const;

    QString getIoTerms() const;
    void setIoTerms(const QString &io_terms);
    bool is_io_terms_Set() const;
    bool is_io_terms_Valid() const;

    QString getUsTermsId() const;
    void setUsTermsId(const QString &us_terms_id);
    bool is_us_terms_id_Set() const;
    bool is_us_terms_id_Valid() const;

    QString getUsTerms() const;
    void setUsTerms(const QString &us_terms);
    bool is_us_terms_Set() const;
    bool is_us_terms_Valid() const;

    QString getRowTermsId() const;
    void setRowTermsId(const QString &row_terms_id);
    bool is_row_terms_id_Set() const;
    bool is_row_terms_id_Valid() const;

    QString getRowTerms() const;
    void setRowTerms(const QString &row_terms);
    bool is_row_terms_Set() const;
    bool is_row_terms_Valid() const;

    QString getIoType() const;
    void setIoType(const QString &io_type);
    bool is_io_type_Set() const;
    bool is_io_type_Valid() const;

    QList<OAISSIOAccountAddress> getAddresses() const;
    void setAddresses(const QList<OAISSIOAccountAddress> &addresses);
    bool is_addresses_Set() const;
    bool is_addresses_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_io_terms_id;
    bool m_io_terms_id_isSet;
    bool m_io_terms_id_isValid;

    QString m_io_terms;
    bool m_io_terms_isSet;
    bool m_io_terms_isValid;

    QString m_us_terms_id;
    bool m_us_terms_id_isSet;
    bool m_us_terms_id_isValid;

    QString m_us_terms;
    bool m_us_terms_isSet;
    bool m_us_terms_isValid;

    QString m_row_terms_id;
    bool m_row_terms_id_isSet;
    bool m_row_terms_id_isValid;

    QString m_row_terms;
    bool m_row_terms_isSet;
    bool m_row_terms_isValid;

    QString m_io_type;
    bool m_io_type_isSet;
    bool m_io_type_isValid;

    QList<OAISSIOAccountAddress> m_addresses;
    bool m_addresses_isSet;
    bool m_addresses_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISSIOAccountItem)

#endif // OAISSIOAccountItem_H
