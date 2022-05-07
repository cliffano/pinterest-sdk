(ns pinterest-rest-api.specs.catalogs-product-group-filters-any-of
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [pinterest-rest-api.specs.catalogs-product-group-filter-keys :refer :all]
            )
  (:import (java.io File)))


(def catalogs-product-group-filters-any-of-data
  {
   (ds/opt :any_of) (s/coll-of catalogs-product-group-filter-keys-spec)
   })

(def catalogs-product-group-filters-any-of-spec
  (ds/spec
    {:name ::catalogs-product-group-filters-any-of
     :spec catalogs-product-group-filters-any-of-data}))
