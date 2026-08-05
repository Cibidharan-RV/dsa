import os
import shutil
import sys

base_dir = os.path.dirname(os.path.abspath(__file__))
template_file = os.path.join(base_dir, "template.md")

def main():
    print("=== Create New DSA Problem ===")
    
    # 1. Get Category
    categories = [d for d in os.listdir(base_dir) if os.path.isdir(os.path.join(base_dir, d)) and not d.startswith('.')]
    print("Available categories:")
    for i, cat in enumerate(categories):
        print(f"{i + 1}. {cat}")
    print("Or enter a new category name.")
    
    category_input = input("Category (number or name): ").strip()
    if not category_input:
        print("Category cannot be empty.")
        sys.exit(1)
        
    if category_input.isdigit() and 1 <= int(category_input) <= len(categories):
        category = categories[int(category_input) - 1]
    else:
        category = category_input
        
    category_path = os.path.join(base_dir, category)
    if not os.path.exists(category_path):
        os.makedirs(category_path)
        print(f"Created new category folder: {category}")
        
    # 2. Get Problem Number
    while True:
        num = input("Problem number: ").strip()
        if num:
            break
            
    # 3. Get Problem Name
    while True:
        name = input("Problem name (e.g., rotate array, or rotate_array): ").strip()
        if name:
            break
            
    # Format the name (replace spaces with underscores, lowercase)
    formatted_name = name.lower().replace(' ', '_')
    folder_name = f"{num}_{formatted_name}"
    folder_path = os.path.join(category_path, folder_name)
    
    if os.path.exists(folder_path):
        print(f"Error: Folder {folder_path} already exists!")
        sys.exit(1)
        
    # Create folder
    os.makedirs(folder_path)
    
    # Create .cpp file
    cpp_file_name = f"{folder_name}_soln.cpp"
    cpp_file_path = os.path.join(folder_path, cpp_file_name)
    with open(cpp_file_path, 'w') as f:
        f.write(f"//{num}. {name}")
        
    # Create .md file
    md_file_name = f"{folder_name}_doc.md"
    md_file_path = os.path.join(folder_path, md_file_name)
    
    if os.path.exists(template_file):
        with open(template_file, 'r') as f:
            template_content = f.read()
            
        # Try to replace the first line with the new title
        title_name = name.replace('_', ' ').title()
        new_title = f"# {num}. {title_name}"
        lines = template_content.split('\n')
        if lines and lines[0].startswith('# '):
            lines[0] = new_title
        else:
            lines.insert(0, new_title)
            
        with open(md_file_path, 'w') as f:
            f.write('\n'.join(lines))
    else:
        # Fallback if no template
        with open(md_file_path, 'w') as f:
            title_name = name.replace('_', ' ').title()
            f.write(f"# {num}. {title_name}\n\n## Idea\n\n## Complexity\n\n")

    print(f"\nSuccess! Created:")
    print(f"Folder: {os.path.relpath(folder_path, base_dir)}")
    print(f"Code:   {os.path.relpath(cpp_file_path, base_dir)}")
    print(f"Doc:    {os.path.relpath(md_file_path, base_dir)}")

if __name__ == "__main__":
    main()
