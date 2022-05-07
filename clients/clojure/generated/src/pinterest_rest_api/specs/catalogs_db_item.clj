(ns pinterest-rest-api.specs.catalogs-db-item
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def catalogs-db-item-data
  {
   (ds/opt :created_at) inst?
   (ds/opt :id) string?
   (ds/opt :updated_at) inst?
   })

(def catalogs-db-item-spec
  (ds/spec
    {:name ::catalogs-db-item
     :spec catalogs-db-item-data}))
