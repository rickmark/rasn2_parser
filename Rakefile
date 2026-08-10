require 'bundler'

require 'antlr4-native'
require 'etc'

def ruby_installer?
  Object.const_defined?(:RubyInstaller)
end

Bundler::GemHelper.install_tasks

desc 'Generate the C++ code for the grammer file'
task :generate do
  generator = Antlr4Native::Generator.new(
    grammar_files:      ["./ASN.g4"],
    output_dir:         'ext/',
    parser_root_method: 'modules'
  )

  generator.generate
end

desc 'Compile the native extension'
task :compile do
  Dir.chdir(File.join(%w(ext asn_parser))) do
    load 'extconf.rb'
    RubyInstaller::Runtime.enable_msys_apps if ruby_installer?
    exec "make -j #{Etc.nprocessors}"
  end
end
