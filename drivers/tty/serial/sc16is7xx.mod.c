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
	{ 0xadcac529, "driver_unregister" },
	{ 0x250c76bf, "uart_unregister_driver" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xf8932cab, "uart_register_driver" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x398a25a9, "of_prop_next_u32" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xac72cb49, "uart_add_one_port" },
	{ 0xc2937d7c, "gpiochip_add_data_with_key" },
	{ 0x635742ec, "sched_set_fifo" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x9dd07f57, "__kthread_init_worker" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8f3f6265, "devm_clk_get_optional" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x340c265, "gpiochip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd4b307d9, "uart_remove_one_port" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0xde9e1a08, "kthread_queue_work" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbbc22fe, "uart_update_timeout" },
	{ 0x93b56fc9, "uart_get_baud_rate" },
	{ 0xf9a482f9, "msleep" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa9627379, "do_SAK" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x778dccfc, "uart_try_toggle_sysrq" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0xef2cf41b, "uart_insert_char" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb4b57e4e, "regmap_raw_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x38b9844d, "uart_write_wakeup" },
	{ 0xb973e18e, "regmap_raw_write" },
	{ 0x84dd5ae8, "regcache_cache_bypass" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4a32d89b, "kthread_flush_worker" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "C79CB49FDEF07970F20E9B7");
