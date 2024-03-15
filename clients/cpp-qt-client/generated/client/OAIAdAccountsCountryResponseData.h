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
 * OAIAdAccountsCountryResponseData.h
 *
 * 
 */

#ifndef OAIAdAccountsCountryResponseData_H
#define OAIAdAccountsCountryResponseData_H

#include <QJsonObject>

#include "OAIAdCountry.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdAccountsCountryResponseData : public OAIObject {
public:
    OAIAdAccountsCountryResponseData();
    OAIAdAccountsCountryResponseData(QString json);
    ~OAIAdAccountsCountryResponseData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIAdCountry getCode() const;
    void setCode(const OAIAdCountry &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    double getIndex() const;
    void setIndex(const double &index);
    bool is_index_Set() const;
    bool is_index_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIAdCountry m_code;
    bool m_code_isSet;
    bool m_code_isValid;

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    double m_index;
    bool m_index_isSet;
    bool m_index_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdAccountsCountryResponseData)

#endif // OAIAdAccountsCountryResponseData_H
