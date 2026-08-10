# frozen_string_literal: true

require 'bundler'

require 'antlr4-native'
require 'etc'
require 'rspec/core/rake_task'
require 'yard'

def ruby_installer?
  Object.const_defined?(:RubyInstaller)
end

Bundler::GemHelper.install_tasks

desc 'Generate the Parser and Lexer from the ASN1.g4 grammar'
task :generate do
  generator = Antlr4Native::Generator.new(
    grammar_files: ['./ASN1.g4'],
    output_dir: 'ext/',
    parser_root_method: 'moduleDefinition'
  )

  generator.generate
end

namespace :cmake do
  desc 'Configure and build the CMake project'
  task :build do
    build_dir = 'build'
    mkdir_p build_dir

    cd build_dir do
      sh 'cmake ../ext/asn1_parser'
      sh 'cmake --build .'
    end
  end

  desc 'Clean CMake build files'
  task :clean do
    rm_rf 'build'
  end
end

RSpec::Core::RakeTask.new(:spec)

task default: %w[generate cmake:build spec]

YARD::Rake::YardocTask.new(:yard) do |t|
  t.files   = ['lib/**/*.rb', 'ext/asn1_parser/asn1_parser.cpp']
  t.options = ['--markup', 'markdown']
end
