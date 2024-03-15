/*
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


package com.prokarma.pkmst.controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import com.prokarma.pkmst.model.Error;
import java.util.List;
import com.prokarma.pkmst.model.RelatedTerms;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for TermsApi
 */
@Ignore
public class TermsApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final TermsApi api = new TermsApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * List related terms
     *
     * Get a list of terms logically related to each input term. &lt;p/&gt; Example: the term &#39;workout&#39; would list related terms like &#39;one song workout&#39;, &#39;yoga workout&#39;, &#39;workout motivation&#39;, etc.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void termsRelatedListTest() throws Exception {
        List<String> terms = null;
    ResponseEntity<RelatedTerms> response = api.termsRelatedList(terms , accept);

        // TODO: test validations
    }
    
    /**
     * List suggested terms
     *
     * Get popular search terms that begin with your input term. &lt;p/&gt; Example: &#39;sport&#39; would return popular terms like &#39;sports bar&#39; and &#39;sportswear&#39;, but not &#39;motor sports&#39; since the phrase does not begin with the given term.
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void termsSuggestedListTest() throws Exception {
        String term = null;
        Integer limit = null;
    ResponseEntity<List<String>> response = api.termsSuggestedList(term, limit , accept);

        // TODO: test validations
    }
    
}
