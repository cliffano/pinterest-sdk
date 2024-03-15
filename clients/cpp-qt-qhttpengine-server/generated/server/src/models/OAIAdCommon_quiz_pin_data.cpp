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

#include "OAIAdCommon_quiz_pin_data.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdCommon_quiz_pin_data::OAIAdCommon_quiz_pin_data(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdCommon_quiz_pin_data::OAIAdCommon_quiz_pin_data() {
    this->initializeModel();
}

OAIAdCommon_quiz_pin_data::~OAIAdCommon_quiz_pin_data() {}

void OAIAdCommon_quiz_pin_data::initializeModel() {

    m_questions_isSet = false;
    m_questions_isValid = false;

    m_results_isSet = false;
    m_results_isValid = false;
}

void OAIAdCommon_quiz_pin_data::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdCommon_quiz_pin_data::fromJsonObject(QJsonObject json) {

    m_questions_isValid = ::OpenAPI::fromJsonValue(questions, json[QString("questions")]);
    m_questions_isSet = !json[QString("questions")].isNull() && m_questions_isValid;

    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    m_results_isSet = !json[QString("results")].isNull() && m_results_isValid;
}

QString OAIAdCommon_quiz_pin_data::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdCommon_quiz_pin_data::asJsonObject() const {
    QJsonObject obj;
    if (questions.size() > 0) {
        obj.insert(QString("questions"), ::OpenAPI::toJsonValue(questions));
    }
    if (results.size() > 0) {
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    }
    return obj;
}

QList<OAIQuizPinQuestion> OAIAdCommon_quiz_pin_data::getQuestions() const {
    return questions;
}
void OAIAdCommon_quiz_pin_data::setQuestions(const QList<OAIQuizPinQuestion> &questions) {
    this->questions = questions;
    this->m_questions_isSet = true;
}

bool OAIAdCommon_quiz_pin_data::is_questions_Set() const{
    return m_questions_isSet;
}

bool OAIAdCommon_quiz_pin_data::is_questions_Valid() const{
    return m_questions_isValid;
}

QList<OAIQuizPinResult> OAIAdCommon_quiz_pin_data::getResults() const {
    return results;
}
void OAIAdCommon_quiz_pin_data::setResults(const QList<OAIQuizPinResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool OAIAdCommon_quiz_pin_data::is_results_Set() const{
    return m_results_isSet;
}

bool OAIAdCommon_quiz_pin_data::is_results_Valid() const{
    return m_results_isValid;
}

bool OAIAdCommon_quiz_pin_data::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (questions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (results.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdCommon_quiz_pin_data::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI