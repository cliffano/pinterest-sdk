/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBoard_sections_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAIBoard_sections_list_200_response_allOf_H
#define OAIBoard_sections_list_200_response_allOf_H

#include <QJsonObject>

#include "OAIBoardSection.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBoardSection;

class OAIBoard_sections_list_200_response_allOf : public OAIObject {
public:
    OAIBoard_sections_list_200_response_allOf();
    OAIBoard_sections_list_200_response_allOf(QString json);
    ~OAIBoard_sections_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBoardSection> getItems() const;
    void setItems(const QList<OAIBoardSection> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBoardSection> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBoard_sections_list_200_response_allOf)

#endif // OAIBoard_sections_list_200_response_allOf_H
