$:.unshift File.join(File.dirname(__FILE__), 'lib')
require 'asn1_parser/version'

Gem::Specification.new do |s|
  s.name     = 'asn1_parser'
  s.version  = ::ASN1Parser::VERSION
  s.authors  = ['Mickey Mouse']
  s.email    = ['mickey@disney.com']
  s.homepage = 'https://github.com/mickeymouse/lua-parser-rb'

  s.description = s.summary = 'A Lua parser for Ruby'

  s.platform = Gem::Platform::RUBY

  s.add_dependency 'rice', '~> 4.0'

  s.extensions = ['ext/asn1_parser/CMakeLists.txt']

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
    'asn1_parser.gemspec'
  ]
end
