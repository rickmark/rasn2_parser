$:.unshift File.join(File.dirname(__FILE__), 'lib')
require 'asn1_parser/version'

Gem::Specification.new do |s|
  s.name     = 'asn_parser'
  s.version  = ::ASN1Parser::VERSION
  s.authors  = ['Rick Mark']
  s.email    = ['rickmark@outlook.com']
  s.homepage = 'https://github.com/rickmark/rasn2_parser'

  s.description = s.summary = 'A Native Gem for Parsing ASN1 Text Files'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = ['ext/asn1_parser/CMakeLists.txt']

  s.require_path = 'lib'
  s.files = Dir[
    'bin/*',
    '{lib,spec}/**/*.rb',
    'ext/asn1_parser/*.{cpp,h}',
    'ext/asn1_parser/CMakeLists.txt',
    'ext/asn1_parser/VERSION',
    'ext/asn1_parser/antlrgen/*',
    'ext/asn1_parser/antlr4-upstream/runtime/Cpp/**/*',
    'Gemfile',
    'README.md',
    'Rakefile',
    'asn1_parser.gemspec'
  ]
end
