# frozen_string_literal: true

$LOAD_PATH.unshift File.join(File.dirname(__FILE__), 'lib')
require 'asn_parser/version'

Gem::Specification.new do |s|
  s.name     = 'asn_parser'
  s.version  = ::ASNParser::VERSION
  s.authors  = ['Rick Mark']
  s.email    = ['rickmark@outlook.com']
  s.homepage = 'https://github.com/rickmark/rasn2_parser'

  s.description = s.summary = 'A Parser for Text ASN1 Files'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = File.join(*%w[ext asn1_parser extconf.rb])

  s.require_path = 'lib'
  s.files = Dir[
    '{lib,spec}/**/*',
    'ext/asn1_parser/*.{cpp,h}',
    'ext/asn1_parser/extconf.rb',
    'ext/asn1_parser/antlrgen/*',
    'ext/asn1_parser/antlr4-upstream/runtime/Cpp/runtime/src/**/*.{cpp,h}',
    'Gemfile',
    'README.md',
    'Rakefile',
    'asn_parser.gemspec'
  ]
end
