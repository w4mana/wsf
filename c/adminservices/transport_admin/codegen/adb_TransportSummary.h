

        #ifndef ADB_TRANSPORTSUMMARY_H
        #define ADB_TRANSPORTSUMMARY_H

       /**
        * adb_TransportSummary.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_TransportSummary class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_TransportSummary adb_TransportSummary_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_TransportSummary_t
         * @param env pointer to environment struct
         * @return newly created adb_TransportSummary_t object
         */
        adb_TransportSummary_t* AXIS2_CALL
        adb_TransportSummary_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _TransportSummary adb_TransportSummary_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_free (
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        /**
         * Free adb_TransportSummary_t object
         * @param  _TransportSummary adb_TransportSummary_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_free_obj (
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for listenerActive. 
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_listenerActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        /**
         * Setter for listenerActive.
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param arg_listenerActive axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_set_listenerActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axis2_bool_t  arg_listenerActive);

        /**
         * Resetter for listenerActive
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_reset_listenerActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        
        

        /**
         * Getter for nonRemovable. 
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_nonRemovable(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        /**
         * Setter for nonRemovable.
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param arg_nonRemovable axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_set_nonRemovable(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axis2_bool_t  arg_nonRemovable);

        /**
         * Resetter for nonRemovable
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_reset_nonRemovable(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        
        

        /**
         * Getter for protocol. 
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_TransportSummary_get_protocol(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        /**
         * Setter for protocol.
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param arg_protocol axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_set_protocol(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            const axis2_char_t*  arg_protocol);

        /**
         * Resetter for protocol
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_reset_protocol(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        
        

        /**
         * Getter for senderActive. 
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_senderActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        /**
         * Setter for senderActive.
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param arg_senderActive axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_set_senderActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axis2_bool_t  arg_senderActive);

        /**
         * Resetter for senderActive
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_reset_senderActive(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether listenerActive is nill
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_is_listenerActive_nil(
                adb_TransportSummary_t* _TransportSummary,
                const axutil_env_t *env);


        

        /**
         * Check whether nonRemovable is nill
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_is_nonRemovable_nil(
                adb_TransportSummary_t* _TransportSummary,
                const axutil_env_t *env);


        

        /**
         * Check whether protocol is nill
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_is_protocol_nil(
                adb_TransportSummary_t* _TransportSummary,
                const axutil_env_t *env);


        
        /**
         * Set protocol to nill (currently the same as reset)
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_set_protocol_nil(
                adb_TransportSummary_t* _TransportSummary,
                const axutil_env_t *env);
        

        /**
         * Check whether senderActive is nill
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_is_senderActive_nil(
                adb_TransportSummary_t* _TransportSummary,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_deserialize(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_TransportSummary_deserialize_obj(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_TransportSummary_declare_parent_namespaces(
                    adb_TransportSummary_t* _TransportSummary,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param TransportSummary_om_node node to serialize from
         * @param TransportSummary_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_TransportSummary_serialize(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axiom_node_t* TransportSummary_om_node, axiom_element_t *TransportSummary_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @param TransportSummary_om_node node to serialize from
         * @param TransportSummary_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_TransportSummary_serialize_obj(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env,
            axiom_node_t* TransportSummary_om_node, axiom_element_t *TransportSummary_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_TransportSummary is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_TransportSummary_t
         * @param env pointer to environment struct
         * @param _listenerActive axis2_bool_t
         * @param _nonRemovable axis2_bool_t
         * @param _protocol axis2_char_t*
         * @param _senderActive axis2_bool_t
         * @return newly created adb_TransportSummary_t object
         */
        adb_TransportSummary_t* AXIS2_CALL
        adb_TransportSummary_create_with_values(
            const axutil_env_t *env,
                axis2_bool_t _listenerActive,
                axis2_bool_t _nonRemovable,
                axis2_char_t* _protocol,
                axis2_bool_t _senderActive);

        


                /**
                 * Free adb_TransportSummary_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _TransportSummary adb_TransportSummary_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_bool_t AXIS2_CALL
                adb_TransportSummary_free_popping_value(
                        adb_TransportSummary_t* _TransportSummary,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for listenerActive by property number (1)
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_property1(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

    
        

        /**
         * Getter for nonRemovable by property number (2)
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_property2(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

    
        

        /**
         * Getter for protocol by property number (3)
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_TransportSummary_get_property3(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

    
        

        /**
         * Getter for senderActive by property number (4)
         * @param  _TransportSummary adb_TransportSummary_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_TransportSummary_get_property4(
            adb_TransportSummary_t* _TransportSummary,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_TRANSPORTSUMMARY_H */
    
