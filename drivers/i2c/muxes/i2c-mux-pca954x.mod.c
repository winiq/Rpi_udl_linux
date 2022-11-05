#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xaffb9cd2, "i2c_mux_add_adapter" },
	{ 0xb903e84c, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x3d204d55, "irq_create_mapping_affinity" },
	{ 0xd0a227b9, "handle_simple_irq" },
	{ 0x8233c638, "__irq_domain_add" },
	{ 0x1e9f1039, "irq_domain_simple_ops" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x55bec97e, "i2c_smbus_write_byte" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xe5ff6599, "i2c_get_device_id" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x7f57c791, "i2c_mux_alloc" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xff3959af, "i2c_smbus_read_byte" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0xc0736ccc, "i2c_mux_del_adapters" },
	{ 0xa33ebc0, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x2dca9a, "__irq_resolve_mapping" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43f8da11, "__i2c_smbus_xfer" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "C64C38DB36FB1F336130045");
