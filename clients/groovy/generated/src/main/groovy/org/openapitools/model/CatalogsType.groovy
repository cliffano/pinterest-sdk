package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;

enum CatalogsType {

    RETAIL("RETAIL"),
    
    HOTEL("HOTEL")

    private final String value

    CatalogsType(String value) {
        this.value = value
    }

    String getValue() {
        value
    }

    @Override
    String toString() {
        String.valueOf(value)
    }
}
