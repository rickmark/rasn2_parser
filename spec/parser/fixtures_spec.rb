# frozen_string_literal: true

require 'spec_helper'

RSpec.describe ASN1Parser do
  it 'has a version number' do
    expect(ASN1Parser::VERSION).not_to be nil
  end

  describe 'processing all folder fixtures' do
    # Dynamically find all files in the folder (e.g., all .json files)
    Dir[File.join(FIXTURE_PATH, '**/*.asn1')].each do |file_path|
      file_name = File.basename(file_path)

      context "when parsing #{file_name}" do
        it 'parses the ASN1 file' do
          result = ASN1Parser::Parser.parse_file file_path
          expect(result.moduleDefinition).to be_a(ASN1Parser::ModuleDefinitionContext)
        end
      end
    end
  end
end
