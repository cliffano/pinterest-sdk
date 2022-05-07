(ns pinterest-rest-api.specs.catalogs-product-group-update-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [pinterest-rest-api.specs.catalogs-product-group-filters :refer :all]
            )
  (:import (java.io File)))


(def catalogs-product-group-update-request-data
  {
   (ds/req :feed_id) string?
   (ds/req :name) string?
   (ds/opt :description) string?
   (ds/req :filters) catalogs-product-group-filters-spec
   })

(def catalogs-product-group-update-request-spec
  (ds/spec
    {:name ::catalogs-product-group-update-request
     :spec catalogs-product-group-update-request-data}))
