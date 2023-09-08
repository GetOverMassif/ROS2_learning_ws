from setuptools import setup

package_name = 'learning_node_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lj',
    maintainer_email='164567487@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'node_helloworld_python = learning_node_python.node_helloworld:main',
            'node_helloworld_class_python = learning_node_python.node_helloworld_class:main'
        ],
    },
)
