# frozen_string_literal: true

# load the native extension
require 'asn1_parser/version'
require_relative 'asn1_parser/asn1_parser'

# The Native ANTLR File Parser
module ASN1Parser
  class Parser
    alias module_definition moduleDefinition
  end
end
