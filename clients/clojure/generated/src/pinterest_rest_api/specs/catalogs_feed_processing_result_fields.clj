(ns pinterest-rest-api.specs.catalogs-feed-processing-result-fields
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [pinterest-rest-api.specs.catalogs-feed-ingestion-details :refer :all]
            [pinterest-rest-api.specs.catalogs-feed-processing-status :refer :all]
            [pinterest-rest-api.specs.catalogs-feed-product-counts :refer :all]
            [pinterest-rest-api.specs.catalogs-feed-validation-details :refer :all]
            )
  (:import (java.io File)))


(def catalogs-feed-processing-result-fields-data
  {
   (ds/req :ingestion_details) catalogs-feed-ingestion-details-spec
   (ds/req :status) catalogs-feed-processing-status-spec
   (ds/req :product_counts) catalogs-feed-product-counts-spec
   (ds/req :validation_details) catalogs-feed-validation-details-spec
   })

(def catalogs-feed-processing-result-fields-spec
  (ds/spec
    {:name ::catalogs-feed-processing-result-fields
     :spec catalogs-feed-processing-result-fields-data}))
