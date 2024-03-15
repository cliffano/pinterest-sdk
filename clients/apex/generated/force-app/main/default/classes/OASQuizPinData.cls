/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * This field includes all quiz data including questions, options, and results.
 */
public class OASQuizPinData {
    /**
     * Get questions
     * @return questions
     */
    public List<OASQuizPinQuestion> questions { get; set; }

    /**
     * Get results
     * @return results
     */
    public List<OASQuizPinResult> results { get; set; }

    public OASQuizPinData() {
        questions = new List<OASQuizPinQuestion>();
        results = new List<OASQuizPinResult>();
    }

    public static OASQuizPinData getExample() {
        OASQuizPinData quizPinData = new OASQuizPinData();
          quizPinData.questions = new List<OASQuizPinQuestion>{OASQuizPinQuestion.getExample()};
          quizPinData.results = new List<OASQuizPinResult>{OASQuizPinResult.getExample()};
        return quizPinData;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASQuizPinData) {           
            OASQuizPinData quizPinData = (OASQuizPinData) obj;
            return this.questions == quizPinData.questions
                && this.results == quizPinData.results;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (questions == null ? 0 : System.hashCode(questions));
        hashCode = (17 * hashCode) + (results == null ? 0 : System.hashCode(results));
        return hashCode;
    }
}
